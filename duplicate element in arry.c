#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int visited[size]; // Array to track visited elements
    for (int i = 0; i < size; i++) {
        visited[i] = 0; // Initialize visited array
    }

    printf("Duplicate elements: ");
    int foundDuplicate = 0; // Flag to check if any duplicates are found

    for (int i = 0; i < size; i++) {
        if (visited[i] == 0) { // If not visited
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) { // Check for duplicates
                    printf("%d ", arr[i]); // Print duplicate
                    foundDuplicate = 1; // Set flag
                    visited[j] = 1; // Mark as visited
                    break; // Exit inner loop after finding a duplicate
                }
            }
        }
    }

    if (!foundDuplicate) {
        printf("No duplicates found.\n
