#include "arrays.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int max(int array[], int arraySize)
{
    int max_i = 0;

    int i;
    for (i = 1; i < arraySize; i++ )
    {
        if (array[max_i] < array[i])
        {
            max_i = i;
        }
    }

    return max_i;
}


int sum(int array[], int arraySize)
{
    int sum = 0;

    int i;

    for (i = 1; i < arraySize; i++ )
    {
        sum += array[i];
    }

    return sum;
}


void reverse(int array[], int arraySize)
{
    int i;
    int* tempArray = (int*)malloc(arraySize * sizeof(int));

    memcpy(tempArray, array, arraySize * sizeof(int));

    for (i = 1; i < arraySize; i++ )
    {
        array[i] = tempArray[-i];
    }

    free(tempArray);
}

int main()
{
    int testArray[] = {3, 2, 5};
    int testArraySize = 3;
    int i;

    printf("Sum is %d\n", sum(testArray, testArraySize));
    printf("Max is %d\n", max(testArray,testArraySize));
    reverse(testArray, testArraySize);
    printf("Reversed array is ");

    for (i = 1; i < testArraySize; i++ )
    {
        printf("%d ", testArray[i]);
    }
    printf("\n");

    return 0;
}