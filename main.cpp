#include "App.h"
#include "Child.h"

int main()
{
    unsigned i = 345;
    Child c(1, &i, 0);
    SuperChild c1(&i);

    return 0;
}
