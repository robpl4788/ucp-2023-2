#include <stdio.h>
#include "powers.h"

int power ()
{
    static int x = 1;
    x *= 2;

    return x;
}

