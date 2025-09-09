#include<stdio.h>

int fact(int n) {
    if(n <= 1)
        return 1;
    else
        return n * fact(n-1);   // recursive call
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial = %d\n", fact(n));   // fixed printf
    return 0;
}
