#include <stdio.h>

int factorial();


int main(void)
{
    int input;
    int continu = 1;

    while ( continu == 1 )
    {

	printf("Enter an Integer:\n");
        scanf("%d", &input);
        
	if ( input >= 0 )
	{
	printf("%d\n", factorial(input));
        }
	else
	{
	    continu = 0;
        }
    
    }
    
    return 0;
}

int factorial(int n)
{
    int result = 1;
    int i;
    
    for ( i = 2; i <= n; i ++ )
    {
        result *= i;
    }

    return result;
}
