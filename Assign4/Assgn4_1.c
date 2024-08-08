#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter the number you want to check against");
    scanf("%d",&b);

    if(a<b)
    {
        printf("The first number is less than the 2nd no. ");
    }

    else if(a==b)
    {
        printf("Both numbers are equal");
    }
    else
    {
        printf("The 2nd no. is less than 1st no.");
    }
}