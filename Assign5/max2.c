#include<stdio.h>

void main()
{   int a,b;
    printf("enter 2 numbers \n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is greater",a);
    }
    else if (b>a)
    {
        printf("%d is greater",b);
    }
    else
    {
        printf("Both are equal");
    }


}