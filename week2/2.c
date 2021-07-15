#include <stdio.h>

int euclidean_gcd(int a, int b)
{
    // compute the GCD of two numbers using 
    // Euclid's Algorithm
    if (a == b)
    {
        return a;
    }
    else if (a > b)
    {
        return euclidean_gcd(a-b, b);
    }
    else
    {
        return euclidean_gcd(b-a, a);
    }
}

int three_number_gcd(int a, int b, int c)
{
    return euclidean_gcd(a, euclidean_gcd(b, c));
}


int main()
{
    int first, second, third;
    printf("Enter the three numbers separated by a comma >");
    scanf("%d, %d, %d", &first, &second, &third);
    printf(
            "the GCD of %d and %d and %d is %d\n", 
            first, second, third, 
            three_number_gcd(first, second, third)
    );
    return 0;
}

