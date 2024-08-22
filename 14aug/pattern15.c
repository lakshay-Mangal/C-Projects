/*
11111
00000
11111
00000
11111
*/
#include<stdio.h>

void main()
{
    int i,j,n;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}