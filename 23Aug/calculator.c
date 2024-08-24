#include<stdio.h>

void sum(int x, int y);
void sub(int x, int y);
void mul(int x, int y);
void div(int x,int y);

int main()
{   char c;
    printf("Enter a character");
    scanf("%c",&c);

    if(c=='a')
    {   int a; int b;
        printf("Enter 2 numbers");
        scanf("%d%d",&a,&b);
         sum(a,b);
    }
     if(c=='b')
    {   int x; int y;
        printf("Enter 2 numbers");
        scanf("%d%d",&x,&y);
         sub(x,y);
    }
     if(c=='c')
    {   int x; int y;
        printf("Enter 2 numbers");
        scanf("%d%d",&x,&y);
         mul(x,y);
    }
     if(c=='d')
    {   int x; int y;
        printf("Enter 2 numbers");
        scanf("%d%d",&x,&y);
         div(x,y);
    }
}
void sum(int x, int y)
{   
    printf("The sum is %d",x+y);
}
void sub(int x, int y)
{   
    printf("The difference is %d",x-y);
}
void mul(int x, int y)
{   
    printf("The product is %d",x*y);
}
void div(int x, int y)
{   
    printf("quotient when a is divided by b is %d",x/y);
}
