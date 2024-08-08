#include<stdio.h>

void main()
{
    char a;
    printf("enter a character \n");
    scanf("%c",&a);

    if(a=='p'|| a=='e'||a=='a'||a=='k' )
    {
        printf("The character is part of peak ");
    }
    else
    {
        printf("Input not valid");
    }
}