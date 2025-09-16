#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("The number of elements in an array: %d\n", n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The list of daily sales of a store is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of elements is: %d\n", sum);

    return 0;
}
