#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter 2 numbers");
    scanf("%d %d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("New a is %d \n New b is %d",a,b) ;
}