#include<stdio.h>

void main()
{
    int a,b,i,j;
    printf("Enter 2 number");
    scanf("%d %d",&a,&b);

    if(a==b)
    { 
        printf("Both numbers are equal");
    }
    else if(a>b)
    {
        printf("first number is bigger");
    }

    else
    {
        printf("second number is bigger");
    }

}