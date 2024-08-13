#include<stdio.h>

void main()
{   int a,n1=0,n2=1,n3,i;
    printf("Enter a number");
    scanf("%d",&a);
    printf("The fibonacci series goes as %d%d",n1,n2);
    for(i=0;i<a;i++)
    {
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;

    }
}