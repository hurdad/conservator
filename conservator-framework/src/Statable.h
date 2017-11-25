//
// Created by Ray Jenkins on 4/28/15.
//

#ifndef CONSERVATOR_STATABLE_H
#define CONSERVATOR_STATABLE_H

#include "Pathable.h"


template<class T>
class Statable {

public:
    virtual Pathable<T>* storingStatIn(struct Stat* stat) = 0;
};

#endif //CONSERVATOR_STATABLE_H
