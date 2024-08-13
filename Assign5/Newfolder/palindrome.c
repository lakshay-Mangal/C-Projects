#include<stdio.h>

void main()
{   int num,rev=0,x,temp;
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;

    while(num!=0)
    {
        x=num%10;
        rev=rev*10+x;
        num=num/10;

    }
    if(temp==rev)
    {
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}