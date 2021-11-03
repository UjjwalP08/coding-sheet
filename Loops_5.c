// Write a Program to Find GCD or HCF of two numbersentered by user

#include<stdio.h>

int maxi(int a,int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{

int num1,num2,gcd,max;


printf("Enter First Number:- ");
scanf("%d",&num1);

printf("Enter First Number:- ");
scanf("%d",&num2);
     
max = maxi(num1,num2);

for(int i = 1; i<=max ; i++)
{

    if((num1 % i == 0) && (num2 % i == 0))
    {
        gcd = i;
    }

}

printf("GCD or HCF of %d and %d number is %d",num1,num2,gcd);
return 0;
}