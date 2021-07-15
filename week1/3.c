#include <stdio.h>
#include <math.h>

int main()
{

    // the code must be compiled as follows to include the math library - 
    // $ gcc -o 3 3.c -lm

    int num, target_bit_index;

    printf("Enter the number you want to check for >> ");
    scanf("%d", &num);
    printf("Enter the index of the bit you want to check >> ");
    scanf("%d", &target_bit_index);

    int target_bitset = (int)pow(2, target_bit_index);

    printf("Has the bit been set? %s. \n", (num & target_bitset) > 0 ? "YES" : "NO");
    printf("If we set the bit, we get => %d\n", num | target_bitset);
    printf("If we clear the bit, we get => %d\n", num & ~target_bitset);

    return 0;
}

