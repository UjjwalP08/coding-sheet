// Write a Program to Check Whether Number is Even or Odd
#include <stdio.h>

int main()
{

    int n;

    // Take Number as input for the User
    printf("Enter a Number:- ");
    scanf("%d", &n);

    // Checking Number is even or odd
    if (n % 2 == 0)
    {
        // Print even Number
        printf(" %d Number is even\n", n);
    }

    else
    {
        // Print odd Number
        printf("%d Number is Odd\n", n);
    }

    return 0;
}