// Write a Program to Generate Multiplication Table of anumber (entered by the user) using a for loop.

#include <stdio.h>

int main()
{

    int num;

    printf("Enter the Number:- ");
    scanf("%d", &num);

    printf("The Multiplication table of %d is \n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", num, i, num * i);
    }

    return 0;
}