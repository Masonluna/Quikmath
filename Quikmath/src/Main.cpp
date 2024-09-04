#include "Vec3.h"

#include <iostream>
#include <Mat/Mat3.h>
int main()
{

    Quikmath::Mat3 m(2, 3, 1,
        2, 1, 4,
        5, 3, 2);

    Quikmath::Mat3 n(5, 3, 2,
        2, 1, 1,
        5, 3, 2);

    m -= n;

    m.show();

    return 0;
}