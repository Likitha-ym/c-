#include <stdio.h>

int binary_search(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            return binary_search(arr, low, mid - 1, key);
        } else {
            return binary_search(arr, mid + 1, high, key);
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    int index;

    index = binary_search(arr, 0, n - 1, key);

    if (index == -1) {
        printf("%d not found\n", key);
    } else {
        printf("%d found at index %d\n", key, index);
    }

    return 0;
}
