#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, S;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum S: ");
    scanf("%d", &S);

    int sum = 0, start = 0;
    bool found = false;

    for (int end = 0; end < n; end++) {
        sum += arr[end];

        while (sum > S && start <= end) {
            sum -= arr[start];
            start++;
        }

        if (sum == S) {
            printf("Subarray with sum %d found from index %d to %d\n", S, start, end);
            found = true;
            break;
        }
    }

    if (!found) {
        printf("No subarray with sum %d found.\n", S);
    }

    return 0;
}
