// Write a Program to Calculate Power of a Number without using inbuilt pow() function by taking two inputs from users as Base and exponent respectively

#include <stdio.h>

int main()
{

    int base, expo, ans;

    printf("Enter the Base of Number:- ");
    scanf("%d", &base);
    int temp = base;

    printf("Enter the Exponent of Number:- ");
    scanf("%d", &expo);

    if (expo == 0)
    {
        ans = 1;
    }
    else
    {
        for (int i = 1; i < expo; i++)
        {
            temp = base * temp;
        }

        ans = temp;
    }

    printf("You Answer of Base %d and Exponent %d is %d", base, expo, ans);

    return 0;
}