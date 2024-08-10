#include<stdio.h>

int main()
{   int a,rev=0;
    printf("Enter a number");
    scanf(" %d",&a);
    while(a!=0)
    {   int x;
        x=a%10;
        rev= rev*10+x;
        a=a/10;
        
    }
    printf("Reverse if %d",rev);
}
