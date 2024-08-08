#include<stdio.h>

void main()
{
    int a[5],b,i;
    printf("Enter the numbers");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The numbers are \n",a);
}