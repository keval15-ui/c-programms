#include <stdio.h>

void findFrequency(int arr[], int size) {
    int visited[size]; // Array to track visited elements
    for (int i = 0; i < size; i++) {
        visited[i] = 0; // Initialize visited array
    }

    for (int i = 0; i < size; i++) {
        if (visited[i] == 0) { // If not visited
            int count = 1; // Start counting occurrences
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) { // Check for the same element
                    count++;
                    visited[j] = 1; // Mark as visited
                }
            }
            printf("Element %d occurs %d times\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}

