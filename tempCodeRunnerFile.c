#include<stdio.h>

void main()
{
    int a;
    printf("Enter the value of a ");
    scanf("%d",&a);
    if(a%2==0 && a%3==0)
    {
        printf("The no. is divisible by both 2 and 3");
    }
    else
    {
        printf("Input not valid");
    }
}