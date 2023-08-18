#include "bounds.h"
#include "macros.h"
#include <stdio.h>

int main()
{
    int minInt = 3;
    int maxInt = 8;
    int valueInt = 5;

    double minDouble = 4.52;
    double maxDouble = 12.5645;
    double valueDouble = 14.56;

    char minChar = 'a';
    char maxChar = 'y';
    char valueChar = 'K';

    if (boundsInt(minInt, maxInt, valueInt) == TRUE)
    {
        printf("%d is between %d and %d\n", valueInt, minInt, maxInt);
    }
    else
    {
        printf("%d is not between %d and %d\n", valueInt, minInt, maxInt);
    }

    if (boundsDouble(minDouble, maxDouble, valueDouble) == TRUE)
    {
        printf("%f is between %f and %f\n", valueDouble, minDouble, maxDouble);
    }
    else
    {
        printf("%f is not between %f and %f\n", valueDouble, minDouble, maxDouble);
    }

    

    if (boundsChar(minChar, maxChar, valueChar) == TRUE)
    {
        printf("%c is between %c and %c\n", valueChar, minChar, maxChar);
    }
    else
    {
        printf("%c is not between %c and %c\n", valueChar, minChar, maxChar);
    }
    
    return 0; 
}