#include "macros.h"
#include "bounds.h"
#include "powers.h"
#include <stdio.h>

int main()
{
    int i;

    printf("Input a number: ");
    scanf("%d", &i);

    if (BETWEEN(0, 30, i) == FALSE) i = 30;

    while (i > 0)
    {
        printf("%d\n", power());
        i--;
    }

    return 0;
}