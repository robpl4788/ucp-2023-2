#include<stdio.h>

int getInt()
{
    int result;

    printf("Enter an integer:\n");
    scanf("%d", &result);

    return result;
}

int main()
{
    int a, b;
    
    a = getInt();
    b = getInt();
    

    if (a % b == 0)
    {
        printf("divisible\n");
    }
    else
    {
        printf("not divisible\n");
    }

    return 0;
}
