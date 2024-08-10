#include<stdio.h>

void main()
{
    int num,rev=0,count=0;
    printf("Enter a number");
    scanf("%d",&num);

    while(num!=0)
    {
        int x=0;
        x=num%10;
        rev=rev*10+x;
        num=num/10;
        count++;
    }
    printf("Count is %d \n",count);  
    printf("Reverse is %d \n",rev);
}