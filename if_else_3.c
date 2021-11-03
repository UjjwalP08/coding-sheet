// Write a Program to Find Largest Number Among ThreeNumbers entered by users
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter Number 1:- ");
    scanf("%d", &num1);

    printf("Enter Number 2:- ");
    scanf("%d", &num2);

    printf("Enter Number 3:- ");
    scanf("%d", &num3);

    // Find the largest Number
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Largest Number is the %d \n", num1);
        }
        else
        {
            printf("Largest Number is the %d \n", num3);
        }
    }

    else
    {
        if (num2 > num3)
        {
            printf("Largest Number is %d \n", num2);
        }

        else
        {
            printf("Largest Number is %d \n", num3);
        }
    }
    return 0;
}