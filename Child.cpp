#include "Child.h"
#include "App.h"

#include <cassert>


SuperChild::SuperChild(unsigned* d)
: Child(0, d, 1)
{
    assert(data != NULL);
}

