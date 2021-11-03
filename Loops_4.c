//  Write a Program to Display Fibonacci Series uptocertain number n (n is entered by user)Example:
// n=100
// Output:Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

#include <stdio.h>

int main()
{

    int a = 0, b = 1, c = 0, num;

    printf("Enter the number:- ");
    scanf("%d", &num);

    printf("Fibonacci Series is: \n");

    while (c <= num)
    {
        printf("%d \t", c);
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}