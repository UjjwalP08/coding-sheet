// Write a Program to display sum of all digits of a given Number N by user
#include <stdio.h>

int main()
{

    int num, sum = 0, temp, temp2;

    printf("Enter the Number:- ");
    scanf("%d", &num);
    temp2 = num;

    while (num > 0)
    {
        temp = num % 10;
        num = num / 10;
        sum = sum + temp;
    }

    num = temp2;

    printf("Sum of all Digit of %d is %d", num, sum);

    return 0;
}