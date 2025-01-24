#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; 
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearchRecursive(arr, low, mid - 1, target);
    } else {
        return binarySearchRecursive(arr, mid + 1, high, target);
    }
}

int binarySearchIterative(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int resultRecursive = binarySearchRecursive(arr, 0, n - 1, target);
    if (resultRecursive != -1)
        printf("Element found at index (Recursive): %d\n", resultRecursive);
    else
        printf("Element not found (Recursive).\n");

    int resultIterative = binarySearchIterative(arr, n, target);
    if (resultIterative != -1)
        printf("Element found at index (Iterative): %d\n", resultIterative);
    else
        printf("Element not found (Iterative).\n");

    return 0;
}

/*
Complexity Analysis:

1. Time Complexity (Both Recursive and Iterative):
   - Binary search works by dividing the search interval in half at each step.
   - This results in a logarithmic time complexity of O(log n), where n is the size of the array.

2. Space Complexity:
   - Recursive version: O(log n) due to the recursion stack.
   - Iterative version: O(1) as it does not use any additional memory beyond a few variables.

Overall, the iterative version is generally preferred for large input sizes due to its lower space complexity.
*/