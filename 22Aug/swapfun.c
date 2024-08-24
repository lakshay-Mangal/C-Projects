#include<stdio.h>

void swap();
void wswap();

int main()
{   char c;
    printf("Enter a character");
    scanf("%c",&c);

    if(c=='a')
    {
        printf("SWAP WITHOUT THIRD VARIABLE \n");
        swap();
    }

    else if(c=='b')
    {
        printf("SWAP WITH THIRD VARIABLE \n");
        wswap();
    }
    else
    {
        printf("Only 2 operations allowed. press a or b");
    }

}

void swap()
{
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("New first no. : %d \n New 2nd no. %d",a,b);
}

void wswap()
{
    int a,b,c;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;
    printf("New first no. : %d \n New 2nd no. %d",a,b);
}
