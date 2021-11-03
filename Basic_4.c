// Write a program where the user is asked to enter twointegers (divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and dividend should be integers.)

#include <stdio.h>

int main()
{
    int num1, num2, d, r;

    // Take Dividend as Input from user
    printf("Enter the Dividend:- ");
    scanf("%d", &num1);

    // Take Divisor as Input from user
    printf("Enter the Divisor:-");
    scanf("%d", &num2);

    // Finding Quotient
    d = num1 / num2;

    // Finding Reminder
    r = num1 % num2;

    // Print Quotient and reminder as output
    printf("Your quotient of %d/%d is %d and reminder is %d ", num1, num2,d,r);

    return 0;
}