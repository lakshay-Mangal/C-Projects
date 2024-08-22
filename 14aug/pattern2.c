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

{
    int n,i,j,space;
    printf("enter a number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {      
        for(space=n-1;space>=i;space--)
        {printf(" ");}
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(space=i;space<n;space++)
        {   printf(" ");}
            for(j=i;j>0;j--)
            {
                printf("*");
            }  
        
        printf("\n");
        
    }
}