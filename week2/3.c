#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_perfect(int number)
{
    // function to check if a number is perfect
    int div_sum = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            div_sum += i;
        }
    }
    return (div_sum == number);
}

bool is_armstrong(int number)
{
    // function to check if a number is an armstrong number

    int digit_count = 0;
    int copy = number;
    int power_sum = 0;

    // find the number of digits the number has
    while (copy != 0)
    {
        int remainder = copy % 10;
        digit_count++;
        copy -= remainder;
        copy /= 10;
    }
    copy = number;
    // sum each digit raised to the 
    // power of the number of digits
    while (copy != 0)
    {
        int remainder = copy % 10;
        power_sum += pow(remainder, digit_count);
        copy -= remainder;
        copy /= 10;
    }

    return (power_sum == number);
}

char* format_boolean_output(bool output)
{
    return output ? "is" : "is not";
}

int main()
{
    int test;
    printf("Enter the number you want to test > ");
    scanf("%d", &test);
    printf("%d %s an Armstrong number.\n", test, format_boolean_output(is_armstrong(test)));
    printf("%d %s a Perfect number.\n", test, format_boolean_output(is_perfect(test)));
    return 0;
}

