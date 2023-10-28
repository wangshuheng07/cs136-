#include "practice3c.h"
void sqrIntArray(int arr[], int length) {
    int i = 0;
    while (i < length) {
        int k = arr[i];
        arr[i] = k * k;
        i ++;
    }
    
}