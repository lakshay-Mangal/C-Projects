/*
12345
12345
12345
12345
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}