#include <stdio.h>

int main() {
    int arr[] = {3, 5, 7, 2, 8, 11, 40};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int largest = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", largest);
    return 0;
}
