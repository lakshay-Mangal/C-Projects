/*
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * * 
 * * * *
* * * * * 
*/

#include<stdio.h>

void main()
{
    int n,i,j,k,l;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=n;i>=2;i--)
    {
        for(k=i;k<n;k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf(" *");
        }
        for(l=i;l<n;l++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(k=n;k>i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        for(l=n;l>i;l--)
        {
            printf(" ");
        }
        printf("\n");
    }
}