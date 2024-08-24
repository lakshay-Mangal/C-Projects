#include<stdio.h>

void main()
{
    printf("enter a number");
    int num;
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("positive");
    }
    
    else if(num<0)
    {
        printf("negative");
    }
    else{
        printf("Zero");
    }
}