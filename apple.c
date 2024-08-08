#include<stdio.h>

void main()
{
    char a;
    printf("Enter a character");
    scanf("%d",&a);

    if(a=='a')
    {
        printf("Apple");
    }

    else if (a=='b')
    {
        printf("Ball");
    }
    else if (a=='c')
    {
        printf("Cat");
    }
    else if (a=='d')
    {
        printf("Dog");
    }
    else 
    {
        printf("Input not valid");
    }

}