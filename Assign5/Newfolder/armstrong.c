#include<stdio.h>

void main()
{
    printf("Enter a number");
    int num,arm=0;
    scanf("%d",&num);

    while(num!=0)
    {
        int x;
        x=num%10;
        arm=arm+x*x*x;
        num=num/10;
        
    }
    printf("%d",arm);
}