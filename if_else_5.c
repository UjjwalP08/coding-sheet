// Write a Program to Check whether a year entered byuser is Leap Year or not

#include <stdio.h>

int main()
{

    int year;

    printf("Enter a year:- ");
    scanf("%d", &year);

    if ((year % 4) == 0)
    {
        if ((year % 100) == 0)
        {
            if ((year % 400) == 0)
            {
                printf("%d year is leap Year", year);
            }

            else
            {
                printf("%d year is not leap Year", year);
            }
        }
        else
        {
            printf("%d year is  leap Year", year);
        }
    }
    else
    {
        printf("%d year is not leap Year", year);
    }

    return 0;
}
