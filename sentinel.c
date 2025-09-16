#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int last = arr[n - 1];
    arr[n - 1] = key;

    int i = 0;
    while (arr[i] != key) {
        i++;
    }

    arr[n - 1] = last;

    if (i < n - 1 || arr[n - 1] == key)
        printf("The number is found at index: %d\n", i);
    else
        printf("The number is not found\n");

    return 0;
}
