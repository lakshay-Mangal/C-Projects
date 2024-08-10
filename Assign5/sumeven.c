#include<stdio.h>

void main()
{
    int a,i=1;
      int sum=0;

    printf("Enter the number till which you want sum");
    scanf("%d",&a);

    while(i<=a)
    {
        sum= sum+i;
        i++;
    }
            printf("Sum is %d",sum);

}