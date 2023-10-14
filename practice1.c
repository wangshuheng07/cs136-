#include <stdio.h>

int sumArray(int arr[], int length) {
    int result = 0;
    int i = 0;
    while (i < length) {
        result += arr[i];
        i ++;
    }
    return result;

}

void printIntArray(int arr[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d \n", arr[i]);
        i ++;
    }
    printf("\n");
}


void sqrIntArray(int arr[], int length) {
    int i = 0;
    while (i < length) {
        int k = arr[i];
        arr[i] = k * k;
        i ++;
    }
    
}


int main() {
    int arr[] = {1, 2, 3, 4, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = sumArray(arr, length);

    printf("The sum of the array is: %d\n", result);
    sqrIntArray(arr, length);
    printIntArray(arr, length);
    return 0;
}
