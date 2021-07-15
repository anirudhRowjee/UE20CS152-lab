#include <stdio.h>
#include <math.h>


int decimal_to_octal(int input)
{
    // function to convert an integer into 
    // it's octal representation
    int answer = 0;
    int counter = 0;

    while (input != 0)
    {
        int remainder = input % 8;
        answer += pow(10, counter) * remainder;
        counter++;
        input -= remainder;
        input /= 8;
    }

    return answer;
}

int main()
{
    int input;
    printf("Enter the decimal number you wish to convert to octal > ");
    scanf("%d", &input);
    printf("The number %d in decimal is %d in octal.\n", input, decimal_to_octal(input));
    return 0;
}

