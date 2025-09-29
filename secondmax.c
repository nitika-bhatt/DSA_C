#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] < max1 && arr[i] > max2) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN)
        printf("No second largest element (all elements are same).\n");
    else
        printf("The second largest element is: %d\n", max2);

    return 0;
}
