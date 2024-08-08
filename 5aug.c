#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);

    if(a>50)
    {
        printf("The number is greater than 50 \n");
    }
    else if (a>45&&a<50)
    {
        printf("The number is greater than 45 and less than 50");
    }
    
    if(a>18)
    {
        printf("This person is also eligible to vote");
    }
}