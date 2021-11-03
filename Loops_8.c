// Write a Program to Reverse a given Number N by user

#include <stdio.h>

int main()
{

    int num, r = 0, temp;

    printf("Enter the number:- ");
    scanf("%d", &num);

    while (num > 0)
    {
        temp = num % 10;
        num = num / 10;
        r = (r * 10) + temp;
    }

    printf("The reverse no is %d", r);

    return 0;
}