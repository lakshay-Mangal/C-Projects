#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the 2 numbers you want to check against \n");
    scanf("%d %d",&b,&c);
    if(a%b==0 && a%c==0)
    {
        printf("The no. is divisible by both %d and %d",b,c);
    }
    else
    {
        printf("Input not valid");
    }
}