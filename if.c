#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);

    if(a>10)
    {
        printf("The number is greater than 10");

    }
    else if (a==10)
    {
        printf("The number is 10");

    }
    else
    {
        printf("The number is less than 10");
    }
    
}