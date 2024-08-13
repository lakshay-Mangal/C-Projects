#include<stdio.h>

void main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is greatest",a);

    }if(b>a && b>c)
    {
        printf("%d is greatest",b);

    }if(c>b && c>a)
    {
        printf("%d is greatest",c);

    }
}