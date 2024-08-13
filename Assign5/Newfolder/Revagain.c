#include<stdio.h>

void main()
{
    int a,rev=0;
    printf("Enter a number");
    scanf("%d",&a);

    while(a!=0)
    {
        int n;
        n=a%10;
        rev=rev*10+n;
        a=a/10;
    }
    printf("%d",rev);
}