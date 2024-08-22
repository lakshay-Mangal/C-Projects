/*
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15 
16 17 18 19 20
21 22 23 24 25 
*/
#include<stdio.h>

void main()
{   int i,j,n,count=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}