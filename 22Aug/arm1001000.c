#include<stdio.h>

void main()
{
    int n,temp,arm=0,i;
    printf("Armstrong numbers b/w 100 and 1000\n");
    for(n=100;n<=1000;n++)
    {
    temp=n;

    while(temp!=0)
    {
        int x;
        x=temp%10;
        arm=arm+x*x*x;
        temp=temp/10;
    }
    if(arm==n)
    printf("The number %d is armstrong",arm);
    }
}