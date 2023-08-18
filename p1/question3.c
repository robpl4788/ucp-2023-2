#include <stdio.h>

int factorial();


int main( void )
{
    int input;

    printf( "Enter an Integer:\n" );
    scanf( "%d", &input );
    
    while ( input >= 0 )
    {
        printf("%d\n", factorial(input));

	    printf("Enter an Integer:\n");
        scanf("%d", &input);
    }
    
    return 0;
}

int factorial( int n )
{
    int result = 1;
    int i;
    
    for ( i = 2; i <= n; i ++ )
    {
        result *= i;
    }

    return result;
}
