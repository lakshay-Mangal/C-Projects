#include<stdio.h>

void main()
{
    int x,fact=1,i;
    printf("Enter a number");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        fact=fact*i;
        
    }
    printf("%d",fact);
}