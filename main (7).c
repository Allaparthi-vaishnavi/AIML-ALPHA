#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as the pivot
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partitioning index

        // Applying divide and conquer
        quickSort(arr, low, pi - 1); // Sort elements before partition
        quickSort(arr, pi + 1, high); // Sort elements after partition
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}

/*
Explanation of Divide and Conquer in Quick Sort:

1. **Divide**:
   - The array is partitioned into two subarrays around a pivot element such that elements less than the pivot are on the left, and elements greater than the pivot are on the right.

2. **Conquer**:
   - The subarrays are then sorted recursively using the same approach.

3. **Combine**:
   - Since the subarrays are sorted in place, no explicit combining step is needed; the entire array becomes sorted after the recursive steps.

Complexity Analysis:

1. Time Complexity:
   - Best case: O(n log n), occurs when the pivot divides the array into two nearly equal halves.
   - Worst case: O(n^2), occurs when the pivot is the smallest or largest element repeatedly.
   - Average case: O(n log n).

2. Space Complexity:
   - O(log n) for the recursion stack in the best case.
   - O(n) in the worst case due to recursion depth.
*/
