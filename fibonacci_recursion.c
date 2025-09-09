#include <stdio.h>

int fib(int n) {
    if(n == 0) 
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series with sums:\n");

    for(i = 1; i < n; i++) {
        int a = fib(i-1);
        int b = fib(i);
        printf("%d + %d = %d\n", a, b, a + b);
    }

    return 0;
}
