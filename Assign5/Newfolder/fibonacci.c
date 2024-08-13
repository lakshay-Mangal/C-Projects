#include<stdio.h>

void main()
{   int i,n,n1=0,n2=1,n3;
    printf("Enter a number till which you want fibonacci");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   n3=n1+n2;
        printf("%d%d%d \t",n1,n2,n3);
        n1=n2;
        n2=n3;
    }
}