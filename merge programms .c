#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    // Copy elements from the first array
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from the second array
    for (int j = 0; j < size2; j++) {
        merged[size1 + j] = arr2[j];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7}; // First array
    int arr2[] = {2, 4, 6, 8}; // Second array
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2]; // Merged arra
