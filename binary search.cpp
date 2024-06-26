#include <stdio.h>

int binarySearch(int arr[], int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid; // Element found, return position
        }
        if (arr[mid] < key) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {3, 4, 6, -9, 10, 8, 9, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element %d is found at position %d\n", key, result);
    } else {
        printf("Element %d is not found\n", key);
    }

    return 0;
}
