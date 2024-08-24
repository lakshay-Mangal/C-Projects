#include<stdio.h>

void add();
void sub();
void mul();
void div();

int main()
{   char c;
    printf("Enter single character");
    scanf("%c",&c);

    if(c=='a')
    {
        add(); 
    }
 else if(c=='s')
    {
        sub(); 
    }
    else if(c=='m')
    {
        mul(); 
    }
 else if(c=='d')
    {
        div(); 
    }
    else
    {
        printf("Only 4 possible outcomes(a,s,m,d)..\n Try again");
    }

    return 0;
}
    void add()
    {   int a,b;
        printf("Enter 2 numbers");
        scanf("%d%d",&a,&b);
        printf("The sum is %d",a+b);
    }
    void sub()
    {   int a,b;
        printf("Enter 2 numbers");
        scanf("%d%d",&a,&b);
        printf("The difference is %d",a-b);
    }
    void mul()
    {   int a,b;
        printf("Enter 2 numbers");
        scanf("%d%d",&a,&b);
        printf("The product is %d",a*b);
    }
    void div()
    {   int a,b;
        printf("Enter 2 numbers");
        scanf("%d%d",&a,&b);
        printf("a divided by b is %d",a/b);
    }