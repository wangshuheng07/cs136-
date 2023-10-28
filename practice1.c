#include <stdio.h>
#include "practice3a.h"
#include "practice3b.h"
#include "practice3c.h"


int main() {
    int arr[] = {1, 2, 3, 4, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = sumArray(arr, length);

    printf("The sum of the array is: %d\n", result);
    sqrIntArray(arr, length);
    printIntArray(arr, length);
    return 0;
}


