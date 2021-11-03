// Write a Program to Swap Two Numbers

#include <stdio.h>

int main()
{
    int a, b, c;

    // First Number
    printf("Enter Number 1:- ");
    scanf("%d", &a);

    // Second Number
    printf("Enter Number 2:- ");
    scanf("%d", &b);

    // Before Swap
    printf("Before Swaping Number-1 = %d and Number-2 = %d\n", a, b);

    // Performing Swaping
    c = a;
    // variable c store the value of variable a so now c = user number 1 input
    a = b;
    // variable a store the value of variable b so now a = user number 2 input
    b = c;
    // variable b store the value of variable c so now b = c and c = user number 1 input

    // After Swap
    printf("After Swaping Number-1 = %d and Number-2 = %d\n", a, b);

    return 0;
}