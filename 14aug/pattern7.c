/*
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

    for(i=n;i>=1;i--)
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