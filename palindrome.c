#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    scanf("%s", str);

    int n = strlen(str);
    int flag = 1;
    for (int i = 0; i < n/2; i++) {//nitika -->ni
        if (str[i] != str[n-1-i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
