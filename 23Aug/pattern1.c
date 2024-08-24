/*
1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 
*/

#include<stdio.h>

void main()
{
    int n,i,j;
    int count;
    printf("Enter a number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {count=j;
            printf("%d",i+j-1); 
        }
        printf("\n");
        count++;
    }
}