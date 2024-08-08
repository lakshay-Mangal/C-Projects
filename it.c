#include<stdio.h>

void main()
{
    int a,ab[10],b,i;
    printf("Enter a number");
    scanf("%d", &a);
    if(a==10)
    {   printf("The table is \n");
        for(i=1;i<=10;i++)
        {
            ab[10]=a*i;
            printf("%d * %d = %d \n",a,i,ab[i]);
        }
    }
    else if (a>10)
    {
        printf("The squared table is \n");
        for(i=1;i<=10;i++)
        {
            ab[10]=a*a*i;
            printf("%d = %d",a,ab[i]);
        }
    }
    else
    {
        for(i=1;i<=10;i+3)
        { ab[i]=i*a;
            printf("%d * %d = %d",a,i,ab[i]);
        }
    }
   
}