#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
