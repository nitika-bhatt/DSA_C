#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1};
    int n = 5;
    if (containsDuplicate(arr, n))
        printf("True (Duplicates exist)\n");
    else
        printf("False (All elements distinct)\n");
    return 0;
}
