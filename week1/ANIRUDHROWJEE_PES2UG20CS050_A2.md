# UE20CS152 Week 2
Anirudh Rowjee `PES2UG20CS050`

## Task 1

### Problem Statement

Write a program to calculate the grade of the student according to the specified marks.  
```
Grade A: Marks(>85 and <=100)  
Grade B: Marks(>60 and <=85)  
Grade C: Marks(>40 and <=60)  
Grade D: Marks(>30 and <=40)  
Fail:    Marks(<30)
```

### Code
```c
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the Marks >> ");
    scanf("%d", &marks);

    if (marks < 30)
    {
        printf("The Student has failed.\n");
    }
    else
    {
        if (marks >= 30 && marks <= 40)
        {
            printf("Grade D\n");
        }
        else if (marks > 40 && marks <= 60)
        {
            printf("Grade C\n");
        }
        else if (marks > 60 && marks <= 85)
        {
            printf("Grade B\n");
        }
        else if (marks > 85 && marks <= 100)
        {
            printf("Grade A\n");
        }
        else
        {
            printf("The Student cannot have more than 100 marks.\n");
        }
    }

    return 0;
}
```

### Output
```
nidavellir :: sem2/UE20CS152/week1 » ./1  
Enter the Marks >> 29
The Student has failed.
nidavellir :: sem2/UE20CS152/week1 » ./1
Enter the Marks >> 45
Grade C
nidavellir :: sem2/UE20CS152/week1 » ./1
Enter the Marks >> 32
Grade D
nidavellir :: sem2/UE20CS152/week1 » ./1
Enter the Marks >> 65
Grade B
nidavellir :: sem2/UE20CS152/week1 » ./1
Enter the Marks >> 90
Grade A
```


## Task 2

### Problem Statement
Write a program to convert all the characters taken as input from lowercase to uppercase.

### Code
```c
#include <stdio.h>

// function to convert an arbitrary character to lowercase
char toLower(char input)
{
    // check if it's already uppercase
    if (input >= 65 && input <= 90)
    {
        return input;
    }
    else if (input >= 97 && input <= 122)
    {
        return input - 32;
    }
    else
    {
        return input;
    }
}


int main()
{
    // take a stream of characters as input
    // convert them all, and print them out.
    char input[10000];
    int count = 0;
    char c = EOF;

    while((c = getchar()) != '\n' && c != EOF)
    {
        input[count] = toLower(c);
        count++;
    }
    printf("%s\n", input);

    return 0;
}

```

### Output
```
nidavellir :: sem2/UE20CS152/week1 » ./2
Hello Darkness My Old Friend!
HELLO DARKNESS MY OLD FRIEND!
```

## Task 3

### Problem Statement
Write a program to take a number and check
1. If the specified bit is set or not
2. what the number is if we set the Specified bit
3. what the number is if we clear the specified bit

### Code
```c
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

    printf("Has the bit been set? %s. \n", 
        (num & target_bitset) > 0 ? "YES" : "NO"
    );
    printf("If we set the bit, we get => %d\n", num | target_bitset);
    printf("If we clear the bit, we get => %d\n", num & ~target_bitset);

    return 0;
}
```

### Output
```
nidavellir :: sem2/UE20CS152/week1 » ./3             
Enter the number you want to check for >> 8
Enter the index of the bit you want to check >> 3
Has the bit been set? YES. 
If we set the bit, we get => 8
If we clear the bit, we get => 0
nidavellir :: sem2/UE20CS152/week1 » ./3
Enter the number you want to check for >> 7
Enter the index of the bit you want to check >> 1
Has the bit been set? YES. 
If we set the bit, we get => 7
If we clear the bit, we get => 5
nidavellir :: sem2/UE20CS152/week1 » ./3
Enter the number you want to check for >> 5
Enter the index of the bit you want to check >> 1
Has the bit been set? NO. 
If we set the bit, we get => 7
If we clear the bit, we get => 5
```

## Task 4

### Problem Statement
Write a program to 
1. generate a multiplication table using for loops
2. print the following pattern

```
*
* *
* * *
* * * *
* * * * *
```

### Code
```c
#include <stdio.h>

int main()
{
    // accept the number for which we will print the table and star
    int limit;

    printf("Enter the number >> ");
    scanf("%d", &limit);

    // multiplication table
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", limit, i, limit*i);
    }

    printf("---\n");

    // star pattern
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            if (j <= i)
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
```

### Output
```
nidavellir :: sem2/UE20CS152/week1 » ./4   
Enter the number >> 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
---
* 
* * 
* * * 
* * * * 
* * * * * 
```

## Task 5

### Problem Statement
Implement a simple calculator using the `switch` statement

### Code
```c
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
```

### Output
```
nidavellir :: sem2/UE20CS152/week1 » ./5   
Enter the operator (+, -, *, /) >> *
Enter the first number >> 100
Enter the second number >> 220
The Answer is 22000.000000
nidavellir :: sem2/UE20CS152/week1 » ./5
Enter the operator (+, -, *, /) >> /
Enter the first number >> 210
Enter the second number >> 12893
The Answer is 0.016288
nidavellir :: sem2/UE20CS152/week1 » ./5
Enter the operator (+, -, *, /) >> +
Enter the first number >> 3288923490
Enter the second number >> 234890723947
The Answer is 238179647437.000000
nidavellir :: sem2/UE20CS152/week1 » ./5
Enter the operator (+, -, *, /) >> -
Enter the first number >> 893274
Enter the second number >> 2348972389
The Answer is -2348079115.000000
```

## Task 6

### Problem Statement
Write a program to accept and validate a date, and find the next date.

### Code
```c
#include <stdio.h>

int main()
{
    int day_limits[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day, month, year;

    printf("Enter the day >> ");
    scanf("%d", &day);
    printf("Enter the month >> ");
    scanf("%d", &month);
    printf("Enter the year >> ");
    scanf("%d", &year);

    // check for leap year
    if ( year > 0 && year % 4 == 0 && year % 400 == 0)
    {
        day_limits[1] = 29;
    }

    if ((year >= 0) && 
            (month >= 1 && month <= 12) && 
            (day >= 1 && day <= day_limits[month-1])
        )
    {
        printf("Date is Valid.\n");
    }
    else
    {
        printf("Date is Invalid\n");
    }


    return 0;
}

```

### Output
```
nidavellir :: sem2/UE20CS152/week1 » ./6   
Enter the day >> 29
Enter the month >> 2
Enter the year >> 2001
Date is Invalid
nidavellir :: sem2/UE20CS152/week1 » ./6
Enter the day >> 31
Enter the month >> 4
Enter the year >> 2021
Date is Invalid
```

## Practice Problem 1
write a program to find the roots of a quadratic equation.

### Code
```c
#include <stdio.h>
#include <math.h>

int main()
{
    // write a program to find the roots of a quadratic equation

    float a, b, c;
    float x, y, plus, minus;

    printf("Enter a b c >> ");
    scanf("%f %f %f", &a, &b, &c);

    float discriminant = (b*b) - (4*a*c);

    if (discriminant < 0)
    {
        // normalize to positive number
        discriminant = fabsf(discriminant);
        // alternatively, 
        // discriminant = discriminant + -2*discriminant;
        x = (-1*b) / (2*a);
        y = sqrtf(discriminant) / (2*a);

        printf("The Roots of the equation are >> \n");
        printf("%f + %fi and %f - %fi\n", x, y, x, y);
    }
    else
    {
        x = (-1*b) / (2*a);
        y = sqrtf(discriminant) / (2*a);
        plus = x + y;
        minus = x - y;
        printf("The Roots of the above equation are %f and %f\n", plus, minus);
    }

    return 0;
}

```

### Output
```
nidavellir :: sem2/UE20CS152/week1 » ./pp1               
Enter a b c >> 1 2 1
The Roots of the above equation are -1.000000 and -1.000000
nidavellir :: sem2/UE20CS152/week1 » ./pp1
Enter a b c >> 1 3 1
The Roots of the above equation are -0.381966 and -2.618034
nidavellir :: sem2/UE20CS152/week1 » ./pp1               
Enter a b c >> 2 2 1
The Roots of the equation are >> 
-0.500000 + 0.500000i and -0.500000 - 0.500000i
```

## Practice Problem 2
Write a program to squeeze the input by removing the repeated characters.

### Code
```c
#include <stdio.h>

int main()
{
    // simple compression, currently works only for alphabets
    char current, previous = EOF;
    // works for limited input sizes as of now
    char alphabets[100];

    int changed = 1;
    int count = 0;

    while ((current = getchar()) != '\n' && current != EOF)
    {
        // check for changes
        if (previous == current)
        {
            changed = 0;
        }
        else
        {
            changed = 1;
        }

        // handle changes
        if (changed == 1)
        {
            alphabets[count] = current;
            previous = current;
            count++;
        }
    }

    printf("The compressed string is >> %s\n", alphabets);

    return 0;
}
```

### Output
```
nidavellir :: sem2/UE20CS152/week1 » ./pp2   
aabbcc
The compressed string is >> abc
nidavellir :: sem2/UE20CS152/week1 » ./pp2
aaabbbcccaaabbbssss
The compressed string is >> abcabs
nidavellir :: sem2/UE20CS152/week1 » ./pp2
mississippi
The compressed string is >> misisipi
```

