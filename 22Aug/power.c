#include<stdio.h>

void main()
{
    printf("Enter a number and the power you want");
    int n,p,i,j,final=1;
    scanf("%d%d",&n,&p);

    while(p>0)
    {
        final=final*n;
        p--;
    }
    printf("%d",final);
}