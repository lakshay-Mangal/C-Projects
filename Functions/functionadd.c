#include<stdio.h>

void fun();
void show();

int main()
{     fun();
show();
    return 0;
}

void fun()
{   int a,b,c;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    printf("THe sum is %d\n",a+b);
}

void show()
{    int a,b;
     printf("\nEnter 2 numbers");
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