#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;

    printf("Enter 2 numbers");
    scanf("%d %d", &a,&b);

    if(a==b)
    {
        printf("The sum is %d ",a+b);
    }
   else if(a<b)
    {
        printf("The product is %d",a*b);
    }
    else if(b>a)
    {
        printf("The division is %d ",a/b);
    }
}