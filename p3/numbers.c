#include <stdio.h>
#include "order.h"
#include "user_input.h"

int main()
{
    int a;
    int b;
    int c;
    char order = ' ';
    

    readint(&a, &b, &c, &order);

    ascOrDesc(order)(&a, &b, &c);

    printf("%d, %d, %d\n", a, b, c);

    /*
    if (order == 'A')
    {
        ascending3(&a, &b, &c);

        printf("%d < %d < %d\n", a, b, c);
    }

    else if (order == 'D')
    {
        descending3(&a, &b, &c);

        printf("%d > %d > %d\n", a, b, c);
    }

    else {
        printf("Invalid Order\n");
    }

    */
    return 0;
}