#include<stdio.h>

void main()
{
    int num,n,f,l,x;
    printf("Enter a number");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        if(n<10)
        {
            f=n;
            n=n/10;
        }
        else 
        if (num==n)
        {
            x=n%10;
            l=x;
            n=n/10;
        }
        else
        {
        x=n%10;
        n=n/10;
    }
    }
    printf("The sum of first and last digit is %d",f+l);

}