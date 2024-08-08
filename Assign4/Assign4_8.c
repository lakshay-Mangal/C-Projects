#include<stdio.h>

void main()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);

    if(a =='a'||a=='A')
    {
        printf("Apple");
    }
    else if(a=='h'||a=='H')
    {
        printf("House");
    }
    else
    {
        printf("INPUT NOT VALID");
    }
}