// Write the program to print fibonacci series

#include <stdio.h>

int main()
{

    int a = 0, b = 1, c, num;

    printf("Entet the Number:- ");
    scanf("%d", &num);

    printf("Fibonacci series is:\n ");
    for (int i = 0; i < num; i++)
    {
        printf("%d \t", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}