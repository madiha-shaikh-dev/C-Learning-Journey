#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter first number:\n");
    scanf("%d", &a);

    printf("Enter second number:\n");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /):\n");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
        printf("Result = %d\n" , a+b);
        break;

        case '-':
        printf("Result = %d\n" , a-b);
        break;

        case '*':
        printf("Result = %d\n" , a*b);
        break;

        case '/':
        if(b!=0)
            printf("Result = %.2f\n",(float) a/b);
        else
            printf("cannot divide by zero\n");
        break;
        default:

        printf(" Invalid operator\n");

    }

           return 0;

}