#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    a = a + b; //a=2, b=3 a=5
    b = a - b; //b=5-3=2
    a = a - b; //a=5-2=3

    printf("%d %d\n", a, b);
    return 0;
}