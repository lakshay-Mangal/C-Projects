#include<stdio.h>

int main()
{
    int y,x=4;
    printf("Enter a year");
    scanf("%d",&y);

    if(y%4==0)
    {
        printf("the year is a leap year");
    }
    else 
    {
        printf("The year is not leap");
    }
}