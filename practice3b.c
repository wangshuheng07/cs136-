#include <stdio.h>
#include "practice3b.h"

void printIntArray(int arr[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d \n", arr[i]);
        i ++;
    }
    printf("\n");
}