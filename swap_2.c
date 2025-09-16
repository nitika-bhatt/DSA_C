#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 

    printf("%d %d\n", a, b);
    return 0;
}
//5 = 0101
//7 = 0111
//a = 0101 ^ 0111 = 0010 (decimal 2)

//b= 0010^0111=0101
//a=0010^0101=0111
