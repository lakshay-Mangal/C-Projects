#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("New a is %d \n New b is %d",a,b);

}