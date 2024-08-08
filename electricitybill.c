#include<stdio.h>

void main()
{
    int u,cpu=10;
    float bill;
    printf("Enter the units of electricity used");
    scanf("%d",&u);

    if(u>=1 && u<=10)
    {
        bill=(u*cpu)*0.5;
    }
    else if(u>=11 && u<=20)
    {
        bill=(u*cpu)*0.7;
    }
    else if (u>=21 && u<=40)
    {
        bill=(u*cpu)*0.85;
    }
    else 
    {
        bill=(u*cpu)*0.9;
    }
    printf("The bill generated is %0.2f",bill);

}