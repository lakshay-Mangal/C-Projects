/*
####*
###**
##***
#****
*****
*/
#include<stdio.h>

void main()
{
    int i,j,k,n;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        for(k=i;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}