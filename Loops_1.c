// Write a Program to Calculate Sum of first N NaturalNumbers (here value of N is Entered by user)

#include <stdio.h>

int main()
{

        int num, sum = 0;
        printf("Enter the Number:- ");
        scanf("%d", &num);

        for (int i = 1; i <= num; i++)
        {
                sum = sum + i;
        }

        printf("The sum of first %d number is %d", num, sum);

        return 0;
}