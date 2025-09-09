#include<stdio.h>
int main()
{
    int a;
    printf("The number is: ");
    scanf("%d", &a);
    int fact=1;
    for (int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of the number is: %d", fact);

}