#include<stdio.h>

void main()
{   int num,product=1,x,y;
    printf("Enter a number");
    scanf("%d",&num);

    while(num!=0)
    {
        x=num%10;
        product=product *x;
        num=num/10;

    }
    printf("product of digits is %d",product);
}
