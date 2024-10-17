#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements

    printf("The number of elements in the array is: %d\n", size);

    return 0;
}
