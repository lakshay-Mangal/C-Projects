#include<stdio.h>

void main()
{       int a,b,i;
        char x;
    printf("Enter a no. a and another no. b between which you want to print digits");
    scanf("%d%d",&a,&b);
    printf("Enter e for even digits and o for odd digits");
    scanf(" %c",&x);

    if(x=='e' && a<b)
    {
        for(i=a;i<=b;i++)
        {
            if(i%2==0)
            {
                printf("%d \t",i);
            }
        }
    }
    
    else if(x=='e' && a>b)
    {
        for(i=a;i>=b;i--)
        {
            if(i%2==0)
            {
                printf("%d \t ",i);
            }
        }
 }
    
    else if(x=='o' && a<b)
    {
        for(i=a;i<=b;i++)
        {
            if(i%2==1)
            {
                printf("%d",i);
            }
        }
    }
    
    else if(x=='o' && a>b)
    {
        for(i=a;i>=b;i--)
        {
            if(i%2==1)
            {
                printf("%d",i);
            }
        }
    }
    else
    {
        printf("Please check if input is valid");
    }
} 