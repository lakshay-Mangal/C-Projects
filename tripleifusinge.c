#include<stdio.h>

void main()
{
    char a;
    printf("Enter a character \n");
    scanf("%c",&a);

    if(a=='e')
    {   int num;
        printf("Enter a number");
        scanf("%d",&num);

        if(num%2==0)
        {
            printf("%d is even",num);
        }
        else
        {
            printf("%d is odd",num);
        }
    }
    else
    {
        printf("Input is not valid");
    }
}