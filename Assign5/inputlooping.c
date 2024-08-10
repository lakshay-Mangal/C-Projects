#include<stdio.h>

void main()
{
    char x;
    printf("Enter a character");
    scanf("%c",&x);

    if(x=='a')
    {
        printf("\n Loop from 1 to 10 \n-----------------\n");
        for(int i=1;i<=10;i++)
        {  
            printf("%d \t",i);

        }
    }
    else if(x=='b')
    {   int i=1;
        printf("\n Loop from 1 to 100 \n-----------------\n");
        while(i<=100)
        {
            printf("%d \t",i);
            i=i+1;
        }
    }
    else if(x=='c')
    {
        int i=50;
        printf("\n Loop from 50 to 100 \n-----------------\n");
        while (i<=100)
        {
            printf("%d \t",i);
            i++;
        }
    }
    else if(x=='d')
    {
        int i= 45;
        printf("\n Loop from 1 to 10 \n-----------------\n");
        while(i<=89)
        {
            printf("%d",i);
            i++;
        }
    }
    else if(x=='e')
    {
     int i=10;
     printf("\n Loop from 1 to 10 \n-----------------\n");
     while(i!=0)
     {
        printf("%d \n",i);
        i--;
     }
    }
    

}