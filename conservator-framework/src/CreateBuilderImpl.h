//
// Created by Ray Jenkins on 4/29/15.
//

#ifndef CONSERVATOR_CREATEBUILDERIMPL_H
#define CONSERVATOR_CREATEBUILDERIMPL_H

#include <zookeeper/zookeeper.h>

#include "CreateBuilder.h"
#include "PathableAndWriteable.h"

using namespace std;

class CreateBuilderImpl : public CreateBuilder<int> {
public:
    virtual ~CreateBuilderImpl() { }
    CreateBuilderImpl(zhandle_t *zk);
    PathableAndWriteable<int>* withFlags(int flags);
    int forPath(string path);
    int forPath(string path, const char *data);
private:
    zhandle_t *zk;
    int flags = 0;
};


#endif //CONSERVATOR_CREATEBUILDERIMPL_H
