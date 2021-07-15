#include <stdio.h>

int main()
{
    // implement a simple calculator using the switch statement

    long double op1, op2, result;
    char operator;

    printf("Enter the operator (+, -, *, /) >> ");
    scanf("%c", &operator);

    printf("Enter the first number >> ");
    scanf("%Lf", &op1);
    printf("Enter the second number >> ");
    scanf("%Lf", &op2);


    switch (operator)
    {
        case '+':
            result = op1 + op2;
            printf("The Answer is %Lf\n", result);
            break;
        case '-':
            result = op1 - op2;
            printf("The Answer is %Lf\n", result);
            break;
        case '*':
            result = op1 * op2;
            printf("The Answer is %Lf\n", result);
            break;
        case '/':
            result = op1 / op2;
            printf("The Answer is %Lf\n", result);
            break;
        default:
            printf("The Operator you have provided is not valid.\n");
            break;
    }

    return 0;
}

