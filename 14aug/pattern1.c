/*
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>

void main()
{
    int n,i,j;
    printf("enter a number");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}