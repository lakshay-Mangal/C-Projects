#include<stdio.h>

void main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);

    if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u' )
    {
        printf("The character is a vowel ");
    }
    else
    {
        printf("Consonant");
    }
}