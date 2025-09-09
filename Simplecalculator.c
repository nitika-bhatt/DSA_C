#include<stdio.h>
int main(){
    int a, b;
    char op;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operator to execute the operation: ");
    scanf(" %c", &op);

    switch(op){
        case '+':
        printf("The operator you entered is +, a+b= %d", a+b);
        break;
        case '-':
        printf("The operator you entered is -, a-b=%d ", a-b);
        break;
        case '*':
        printf("The operator you entered is *, a*b=%d ", a*b);
        break;
        case '/':
        printf("The operator you entered is /, a/b=%d ", a/b);
        break;
        default:
        printf("YOU DID NOT ENTER THE RIGHT OPERATOR");        
    }
return 0;
}