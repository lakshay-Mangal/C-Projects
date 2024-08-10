#include<stdio.h>

void main()
{
    int num,temp,x,sq,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
     sq=num*num;
    
    while(sq!=0)
    {
        x=sq%10;
        sum=sum+x;
        sq=sq/10;
    }
    printf("The sum is %d",sum);
    if(num==sum)
    {
        printf("\n No. is neon");
    }
    else
    {
        printf("No. is not neon");
    }
}