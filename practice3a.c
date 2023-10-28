#include "practice3a.h"

int sumArray(int arr[], int length) {
    int result = 0;
    int i = 0;
    while (i < length) {
        result += arr[i];
        i ++;
    }
    return result;
}