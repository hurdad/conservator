//
// Created by rjenkins on 5/30/15.
//

#ifndef CONSERVATOR_STATABLEPATHABLE_H
#define CONSERVATOR_STATABLEPATHABLE_H

#include <zookeeper/zookeeper.jute.h>

#include "Pathable.h"

using namespace std;

template<class T>
class StatablePathable : public Pathable<T> {

public:
    virtual Pathable<T>* storingStatIn(struct Stat* stat) = 0;
};
#endif //CONSERVATOR_STATABLEPATHABLE_H
