#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9, n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d and %d\n", i, j);
                return 0;
            }
        }
    }
    return 0;
}
