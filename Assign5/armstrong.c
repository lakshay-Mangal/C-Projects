#include<stdio.h>

void main()
{
    int num,x,n2=0,temp;
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        x=num%10;
        n2=n2+(x*x*x);
        num=num/10;
    }
    if(n2==temp)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("Number is not armstrong");
    }
}