#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char strs[][50], int n) {
    static char prefix[50];
    strcpy(prefix, strs[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j])
            j++;
        prefix[j] = '\0';
    }
    return prefix;
}

int main() {
    char strs[3][50] = {"flower", "flow", "flight"};
    int n = 3;
    char* res = longestCommonPrefix(strs, n);
    printf("Longest Common Prefix: %s\n", res);
    return 0;
}
