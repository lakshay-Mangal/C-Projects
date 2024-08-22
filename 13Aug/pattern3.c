/*
*
**
***
****
*****
*****
****
***
**
*
*/

#include<stdio.h>

void main()
{   int a,i,j;
    printf("enter a number");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=a;i>=1;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
            printf("\n");

    }
}
