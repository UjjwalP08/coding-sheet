// Write a Program to Check Whether a Character is Vowel or Consonant.
#include <stdio.h>

int main()
{
    char c;

    printf("Enter Your Character:- ");
    scanf("%c", &c);

    // Condition for Vowels
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {

        // Print Vowels
        printf("%c Character is Vowel", c);
    }

    else if (c >= 'a' && c <= 'z')
    {

        printf("%c Character is Constatnt", c);
    }
    else
    {
        printf("Enter Correct Charcter");
    }

    return 0;
}