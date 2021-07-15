#include <stdio.h>
#include <stdbool.h>


/* 
 * Program to use Functions to 
 * 1. reverse a number
 * 2. check if a given number is a palindrome or not
 */

int reverse_number(int input)
{
    // function to reverse a number

    int sum = 0;
    int copy = input;

    while (input != 0)
    {
        int rem = input % 10;
        sum = sum * 10 + rem;
        input -= rem;
        input /= 10;
    }
    // printf("The number is %d\n", copy);
    // printf("The Reversed version of the number is %d\n", sum);
    return sum;
}

bool is_paldinrome_number(int input)
{
    // function to check if the number is the reverse 
    // of itself  i.e. is a palindrome
    return (reverse_number(input) == input);
}

int main()
{
    int num = 0;
    printf("Enter the number to check> ");
    scanf("%d", &num);
    printf(
        "The number %d %s a palindrome number.\n", 
        num, 
        is_paldinrome_number(num) ? "is" : "is not"
    );
    return 0;
}
