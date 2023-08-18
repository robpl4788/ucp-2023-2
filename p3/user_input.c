#include "user_input.h"

void readint(int* pi1, int* pi2, int* pi3, char* pc)
{
    printf("Enter an integer: ");
    scanf("%d", pi1);

    printf("Enter an integer: ");
    scanf("%d", pi2);

    printf("Enter an integer: ");
    scanf("%d", pi3);

    printf("Enter A or D: ");
    scanf(" %c", pc);

}