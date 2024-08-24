#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(b>c)
        {
            printf("%d is greatest of all",a);
        }
        else if(c>b)
        {
            if(a>c)
            {
                printf("%d is greatest of all",a);
            }
            else if(c>a)
            {
                printf("%d is greatest of all",c);
            }
            else
            {
                printf("Both a and c are equal");
            }
        }

    }
    else 
    {
         if(b>c)
        {
            printf("%d is greatest of all",b);
        }
        else if(c>b)
        {
            printf("%d is greatest of all",c);
        }
        
    } 
}