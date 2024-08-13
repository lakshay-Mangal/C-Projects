#include<stdio.h>

void main()
{   int num,sum=0,i,sq;

    printf("Enter a number");
    scanf("%d",&num);
    sq=num*num;
    
    while(sq!=0)
    {
        i=sq%10;
        sum=sum+i;
        sq=sq/10;
    }
    printf("%d",sum);
}
