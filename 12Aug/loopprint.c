#include<stdio.h>

void main()
{       int a,b,i,sum=0;
    printf("Enter a no. a and another no. b between which you want to print");
    scanf("%d%d",&a,&b);
    
    if(a<b)
    {
        for(i=a;i<=b;i++)
        {
            printf("%d \n",i);
        }
    }
    
    else if(a>b)
    {
        for(i=a;i>=b;i--)
        {
           
            
                printf("%d \n",i);
         }
        
    }
    
   
    else
    {
        printf("Please check if input is valid");
    }
} 