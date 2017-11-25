//
// Created by rjenkins on 5/26/15.
//

#ifndef CONSERVATOR_SETDATABUILDER_H
#define CONSERVATOR_SETDATABUILDER_H

#include "Watchable.h"
#include "Statable.h"
#include "PathableAndWriteable.h"
#include "Versionable.h"

template<class T>
class SetDataBuilder : PathableAndWriteable<int>, public Versionable<int> {
public:
    virtual ~SetDataBuilder() {};
    virtual T forPath(string path) = 0;
    virtual T forPath(string path, const char *data) = 0;
    virtual PathableAndWriteable<T>* withVersion(int version) = 0;
};
#endif //CONSERVATOR_SETDATABUILDER_H
