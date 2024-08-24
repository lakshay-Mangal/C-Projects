#include<stdio.h>

void add(int a, int b);

int main()
{
    add(5,124);
    return 0;
}

void add(int x,int y)
{
    printf("The sum is %d",x+y);
}