/*
    *
   * *
  * * * 
 * * * *
* * * * * 
 * * * *
  * * *
   * *
    *

*/
#include<stdio.h>

void main()
{
        int i,j,k,l,n;
        printf("Enter a number");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            for(j=n;j>i;j--)
            {
                printf(" ");

            }
            for(k=0;k<i;k++)
            {
                printf(" *"); 
            }
            for(l=n;l>i;l--)
            {
                printf(" ");
            }
            printf("\n");
        }

        for(i=n-1;i>=1;i--)
        {
            for(j=i;j<n;j++)
            {
                printf(" ");

            }
            for(k=i;k>0;k--)
            {
                printf(" *"); 
            }
            for(l=i;l<n;l++)
            {
                printf(" ");
            }
            printf("\n");
        }
}