// Write a Program to Calculate Power of a Number using inbuilt pow() function by taking two inputs from users as Base and exponent respectively

#include <stdio.h>
#include <math.h>

int main()
{

    int base, expo, ans, num;

    printf("Enter the Base of Number:- ");
    scanf("%d", &base);

    printf("Enter the Exponent of Number:- ");
    scanf("%d", &expo);

    ans = pow(base, expo);

    printf("You Answer of Base %d and Exponent %d is %d", base, expo, ans);

    return 0;
}