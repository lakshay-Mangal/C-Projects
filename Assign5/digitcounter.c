#include<stdio.h>

void main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    int count =0;
    while(x!=0)
    {
        x = x/10;
        count++;
        
    }
    printf("count is %d",count);
}