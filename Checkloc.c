#include<stdio.h>

void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);

    if(a>=1 && a<=10)
    {
        printf("The no. is between 1 and 10");

    }
    else if(a>=11 && a<=20)
    {
        printf("The no. is between 11 and 20");
    }
     else if(a>=34 && a<=89)
    {
        printf("The no. is between 34 and 89");
    }
    else
    {
        printf("Not valid");
    }
}