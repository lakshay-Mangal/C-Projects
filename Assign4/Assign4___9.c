#include<stdio.h>

int main()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);

    if(a=='a'||a=='A'||a=='e'||a=='E'||
    a=='i'||a=='I'||a=='o'||a=='u'||a='O'||a='U')
    {
        printf("The character is a vowel");
    }
    else
    {
        printf("Consonent");
    }
    return 0;
}