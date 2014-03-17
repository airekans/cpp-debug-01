#ifndef _CHILD_H_
#define _CHILD_H_

#include "Base1.h"

class Child : public Base
{
public:
    Child(unsigned s, unsigned* d, int i)
    {
        seq = s;
        data = d;
        i_data = i;
    }

protected:
    unsigned seq;
    unsigned* data;
    int i_data;
};

class SuperChild : public Child
{
public:
    SuperChild(unsigned* d);
};


#endif
