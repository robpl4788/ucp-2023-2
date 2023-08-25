#include "order.h"
#include <stddef.h>

fptr ascOrDesc(char A_or_D)
{
    fptr returnValue = NULL;

    if (A_or_D == 'A')
    {
        returnValue = &ascending3;
    }
    else if (A_or_D == 'D')
    {
        returnValue = &descending3;
    }
    

    return returnValue;
}

void ascending2(int* p1, int* p2)
{
    if (*p1 > *p2)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}

void ascending3(int* p1, int* p2, int* p3)
{
    ascending2(p1, p2);
    ascending2(p2, p3);
    ascending2(p1, p2);
}

void descending2(int* p1, int* p2)
{
    if (*p1 < *p2)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}

void descending3(int* p1, int* p2, int* p3)
{
    descending2(p1, p2);
    descending2(p2, p3);
    descending2(p1, p2);
}