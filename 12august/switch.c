#include<stdio.h>

void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    switch(a)
    {
        case 1: 
        printf("Value is 1");
        break;
        case 2:
        printf("Value is 2");
        break;
        case 3:
        printf("Value is 3");
        break;
        default:
        printf("No value matched");
    }
}