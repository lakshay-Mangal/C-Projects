#include<stdio.h>

void main()
{
    int a;
    printf("Enter a number \n");
    scanf("%f",&a);

    if(a%5==0)
    {
        printf("The number is divisible by 5 ");
    }
    else
    {
        printf("The number is not divisible by 5");
    }
    
}