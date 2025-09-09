#include <stdio.h>

int binary_search(int arr[], int f, int l, int key) {
    if (f > l)
        return -1;

    int mid = (f + l) / 2;

    if (arr[mid] == key)
        return mid;
    else if (key < arr[mid])
        return binary_search(arr, f, mid - 1, key);
    else
        return binary_search(arr, mid + 1, l, key);
}

int main() {
    int n, key;
    printf("Enter the number of elements present in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key you want to find: ");
    scanf("%d", &key);

    int result = binary_search(arr, 0, n - 1, key);

    if (result != -1)
        printf("The key %d is found at index %d\n", key, result);
    else
        printf("The key %d is not found\n", key);

    return 0;
}
