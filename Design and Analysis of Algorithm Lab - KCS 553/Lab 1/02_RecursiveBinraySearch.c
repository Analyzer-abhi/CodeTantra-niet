#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (high < low) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, high, key);
    } else {
        return binarySearch(arr, low, mid - 1, key);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("enter the item to be search: ");
    scanf("%d", &element);

    int result = binarySearch(arr, 0, n - 1, element);

    if (result == -1) {
        printf("item not present");
    } else {
        printf("item present");
    }
    return 0;
}
