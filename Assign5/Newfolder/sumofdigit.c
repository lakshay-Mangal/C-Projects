#include<stdio.h>

void main()
{
    printf("Enter a number");
    int num,i,x,sum=0;
    scanf("%d",&num);

    while(num!=0)
    {
        x=num%10;
        sum=sum+x;
        num=num/10;
    }
    printf("%d",sum);
}