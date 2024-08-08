#include<stdio.h>

void main()
{
    int age,votingage=18;
    printf("Enter a number");
    scanf("%d",&age);

    if(age<18)
    {
        printf("The person is not eligible to vote");
    }
    else
    {
        printf("He/She is eligible to vote");
    }
}