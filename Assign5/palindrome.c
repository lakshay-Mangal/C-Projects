#include<stdio.h>

void main()
{   int num,rev=0,rem=0,count=0;
    printf("Enter a number");
    scanf("%d",&num);
    int n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        count++;
        num=num/10;
    }
    printf("\n Reverse is %d \n",rev);
    if(rev==n)
    {
        printf("This is a palindrome number");
    }
    else
    {
        printf("This is not a palindrome number");
    }
}