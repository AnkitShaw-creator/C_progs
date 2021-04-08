#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ARRAY_LENGTH 10

int main(int argc, char *argv[]) {
    int *arr = (int*) malloc (sizeof(int) * ARRAY_LENGTH);

    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        //printf("Enter an integer %d:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = ARRAY_LENGTH-1; i >= 0; i--)
    {
        printf("arr[%d] = %d: \n", i, arr[i]);
    }

    return(0);
}