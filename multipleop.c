#include<stdio.h>

void main()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);

    if(a=='a')
    {
        printf("Addtion \n----------------------\n Enter 2 numbers \n");
        int a,b;
        scanf("%d %d",&a,&b);
        printf("The sum is %d",a+b);
    }
    else if (a=='b')
    {
        printf("Subtraction \n------------------\n Enter 2 numbers");
        int a,b;
        scanf("%d %d",&a,&b);
        printf("The difference is %d",a-b);
    }
    else if (a=='c')
    {
        printf("Product \n-------------------\n Enter 2 numbers");
        int a,b;
        scanf("%d %d",&a,&b);
        printf("The product is %d",a*b);
    }
     else if (a=='d')
    {
        printf("Division \n-------------------\n Enter 2 numbers");
        int a,b;
        scanf("%d %d",&a,&b);
        printf("A divided by b is  %d",a/b);
    }
    else if (a=='s')
    {
        printf("Swap without 3rd variable \n-------------------\n Enter 2 numbers");
        int a,b;
        scanf("%d %d",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("New A is %d \n \n New B is  %d",a,b);
    }
    else if (a=='w')
    {
        printf("Swap with 3rd Variable \n-------------------\n Enter 2 numbers");
        int a,b,c;
        scanf("%d %d",&a,&b);
        c=a;
        a=b;
        b=c;
        printf("New A is %d \n \n New B is  %d",a,b);
    }
    
    else
{
    printf("Input not valid");
}
}