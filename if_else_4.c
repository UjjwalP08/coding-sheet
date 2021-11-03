// Write a Program which accepts coefficients of aquadratic equation from the user and displays the roots(both real and complex roots depending upon thediscriminant).

// If you want to use integer number use this program

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int root1, root2;

    printf("Enter the coefficients of x^2:- ");
    scanf("%d", &a);

    printf("Enter the coefficients of x:- ");
    scanf("%d", &b);

    printf("Enter the constatant:- ");
    scanf("%d", &c);

    printf("\n");
    printf("\n");

    int discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {

        printf("%d is your disriminant so\n", discriminant);
        // real root
        root1 = (-b + (sqrt(discriminant))) / 2 * a;

        root2 = (-b - (sqrt(discriminant))) / 2 * a;

        printf("(%dx^2) + (%dx) + (%d) real roots are:-\n", a, b, c);
        printf("root-1 = %d and root-2 = %d \n", root1, root2);
        printf("\n");
        printf("\n");
    }

    else if (discriminant == 0)
    {

        printf("%d is your disriminant so\n", discriminant);

        // roots when answer = 0

        root1 = root2 = (-b / 2 * a);

        printf("(%dx^2) + (%dx) + (%d) real roots are:-\n", a, b, c);
        printf("root-1 = %d and root-2 = %d \n", root1, root2);
        printf("\n");
        printf("\n");
    }

    else
    {

        printf("%d is your disriminant so\n", discriminant);
        // Complex root of Eqaution

        int root1_of_1 = (-b / 2 * a);
        int root1_of_2 = sqrt(-discriminant) / 2 * a;

        int root2_of_1 = (-b / 2 * a);
        int root2_of_2 = sqrt(-discriminant) / 2 * a;

        printf("(%dx^2) + (%dx) + (%d) real roots are:-\n", a, b, c);
        printf("root-1 = %d + %di  ", root1_of_1, root1_of_2);
        printf("and root-2 = %d + %di \n", root2_of_1, root2_of_2);
    }

    return 0;
}

// Write a Program which accepts coefficients of aquadratic equation from the user and displays the roots(both real and complex roots depending upon thediscriminant).

// If you want to use decimal number in program use this one

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float a, b, c;
//     float root1, root2;

//     printf("Enter the coefficients of x^2:- ");
//     scanf("%f", &a);

//     printf("Enter the coefficients of x:- ");
//     scanf("%f", &b);

//     printf("Enter the constatant:- ");
//     scanf("%f", &c);

//     float answer = (b * b) - (4 * a * c);

//     if (answer > 0)
//     {
//         // real root
//         root1 = (-b + (sqrtf (discriminant))) / 2 * a;

//         root2 = (-b - (sqrtf (discriminant))) / 2 * a;

//         printf("%fx^2 + %fx + %fc real roots are:-\n",a,b,c);
//         printf("root 1 = %f and root 2 = %f \n", root1, root2);
//     }

//     else if (answer == 0)
//     {

//         // roots when answer = 0

//         root1 = root2 = (-b / 2 * a);

//         printf("%fx^2 + %fx + %fc real roots are:-\n",a,b,c);
//         printf("root 1 = %f and root 2 = %f \n", root1, root2);
//     }

//     else
//     {
//         // Complex root of Eqaution

//         float root1_of_1 = (-b / 2 * a);
//         float root1_of_2 = sqrtf((-discriminant) / 2 * a;

//         float root2_of_1 = (-b / 2 * a) ;
//         float root2_of_2 = sqrtf(-discriminant) / 2 * a;

//         printf("%fx^2 + %fx + %fc real roots are:-\n",a,b,c);
//         printf("root 1 = %f + i%f  ", root1_of_1,root1_of_2);
//         printf("and root 2 = %f + i%f \n",root2_of_1,root2_of_2);
//     }

//     return 0;
// }