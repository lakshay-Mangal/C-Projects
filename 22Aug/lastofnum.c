#include<stdio.h>

void main()
{   int i,n,f,l,num;
    printf("Enter a number");
    scanf("%d",&n);
    num=n;
    while(n>0)
    { int x;
        if(n<10)
        {
            f=n;
            n=n/10;
        }
        else
        {    if(num==n)
            {x=n%10;
            n=n/10;
            l=x;
            }
            else
            {
            x=n%10;
            n=n/10;
           
            }
        }
    }
    printf("The first and last digits are %d and %d respectively",f,l);
}