#include<stdio.h>

void main()
{
    int a,b,i;
    char x;
    printf("Enter the numbers between which you want to print \n");
    scanf("%d%d",&a,&b);
    printf("Now select if you want to print in ascending or descending");
    scanf(" %c",&x);

    if(x=='a')
    {
        if(a<b)
        {while(a<b)
        {
            printf("%d \t",a);
            a++;
        }
    }
    else if (b<a)
    {
        while(b<a)
        {
            printf("%d \t",b);
            b++;
        }
    }
    else
    {
        printf("Both numbers are equal looping not possible");
    }
    }

    else if (x=='d')
    
    if(b>a)
    {
        
        while(b>a)
        {
            printf("%d \t",b);
            b--;
        }
    
    }
    else if (a>b)
    {
        while(a>b)
        {
            printf("%d \t",a);
            a--;
        }
    }
    else
    {
        printf("both numebers are equal. looping not possible");
    }
    else
    {
        printf("Wrong Input");
    }
}