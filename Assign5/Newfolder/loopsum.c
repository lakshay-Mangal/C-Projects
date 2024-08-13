#include<stdio.h>

void main()
{       int a,b,i,sum=0;
        char x;
    printf("Enter a no. a and another no. b between which you want  to do sumof all digits");
    scanf("%d%d",&a,&b);
    printf("Enter e for sum of even digits and o for sum of odd digits");
    scanf(" %c",&x);

    if(x=='e' && a<b)
    {
        for(i=a;i<=b;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
        }
        printf("The sum is %d",sum);
    }
    
    else if(x=='e' && a>b)
    {
        for(i=b;i<=a;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
        }
        printf("The sum is %d",sum);
    }
    
    else if(x=='o' && a<b)
    {
        for(i=a;i<=b;i++)
        {
            if(i%2==1)
            {
                sum=sum+i;
            }
        }
        printf("The sum is %d",sum);
    }
    
    else if(x=='o' && a>b)
    {
        for(i=b;i<=a;i++)
        {
            if(i%2==1)
            {
                sum=sum+i;
            }
        }
        printf("The sum is %d",sum);
    }
    else
    {
        printf("Please check if input is valid");
    }
} 