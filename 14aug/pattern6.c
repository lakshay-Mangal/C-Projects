/*
    *
   * *
  * * * 
 * * * *
* * * * * 
*/

#include<stdio.h>

void main()
{
    int i,j,k,n,l;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
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