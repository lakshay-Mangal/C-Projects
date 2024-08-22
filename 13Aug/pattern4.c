/*      
*****
****
***
**
*
*
**
***
****
*****
*/

#include<stdio.h>

void main()
{
    int i,a,j;

    printf("enter a number");
    scanf("%d",&a);

    for(i=a;i>=1;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=a;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}