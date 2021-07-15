#include <stdio.h>
#include "utils.h"


int main()
{
    int x, y;
    printf("Enter the two numbers separated by a space (x,y) > ");
    scanf("%d %d", &x, &y);
    int answer = custom_pow(x, y);
    printf("%d to the power of %d is > %d\n", x, y, answer);
    return 0;
}
