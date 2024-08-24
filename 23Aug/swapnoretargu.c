#include<stdio.h>

void swapwith(int x, int y);
void swapwithout(int x, int y);

int main()
{
    char c;
    int a,b;
    printf("Enter a character");
    scanf("%c",&c);
    if(c=='a')
    {
        printf("Enter 2 number");
        scanf("%d%d",&a,&b);
        swapwith(a,b);
    }
    if(c=='b')
    {
        printf("Enter 2 number");
        scanf("%d%d",&a,&b);
        swapwithout(a,b);
    }
}

void swapwith(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("New first no. is %d\n New 2nd no. is %d",x,y);
}
void swapwithout(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("New first no. is %d\n New 2nd no. is %d",x,y);
}