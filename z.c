#include<stdio.h>
void main()
{   int i,j,n;
printf("Enter a number");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n ||i==1 ||i+j==n+1)
            //Better to use i==j as it makes the code less bulky
            {
                printf("*");
            }
            
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        }
}