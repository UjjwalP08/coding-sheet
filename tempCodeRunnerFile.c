//  Write a Program to Find Factorial of a given number N(N is entered by user)

#include <stdio.h>

int main()
{

    int fact = 1, num;

    printf("Enter the Number:- ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        if (i == 0)
        {
            fact = 1;
        }
        else
        {
            fact = fact * i;
        }
    }

    printf("The factorial of %d is %d", num, fact);

    return 0;
}