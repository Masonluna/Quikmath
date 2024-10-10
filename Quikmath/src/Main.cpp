#include "Vec3.h"

#include <iostream>
#include <Mat/Mat3.h>
int main()
{

    Quikmath::Mat3 m(7, 6, 3,
        4, 2, 5,
        10, 6, 4);

    Quikmath::Mat3 n(3, 2, 1,
        5, 3, 3,
        4, 2, 1);

    Quikmath::Mat3 p = m * n;

    p.show();

    return 0;
}