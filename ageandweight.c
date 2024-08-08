#include<stdio.h>

void main()
{
    int age,weight;
    
    printf("Enter your age ");
    scanf("%d",&age);

    if(age>=18)
    {  
        printf("Enter your weight now");
        scanf("%d",weight);
        if(weight>=50)
            {
                printf("Valid");
            }
        else
        {
            printf("Weight is less than required");
        }
    }
    else
    {
        printf("Age is less than required");
    }


    
    
}