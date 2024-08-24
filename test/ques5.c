//PRINT x

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter a number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j==n+1 || i==j)
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