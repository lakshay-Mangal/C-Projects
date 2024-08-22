/*
*****
 ****
  ***
   **
    *
   **
  ***
 ****
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
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }

     for(i=2;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}