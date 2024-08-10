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
    {   int i=56;
        printf("\n Loop from 56 to 34 \n-----------------\n");
        while(i>=34)
        {
            printf("%d \t",i);
            i--;
        }
    }
    else if(x=='c')
    {
        int i=50;
        printf("\n Loop from 1 to 100 even numbers\n-----------------\n");
        while (i<=100)
        {   if(i%2==0)
            {
            printf("%d \t",i);
            }
            i++;
        }
    }
    else if(x=='d')
    {
        int i= 87;
        printf("\n Loop from 1 to 10 \n-----------------\n");
        while(i>=32)
        {   if(i%2==1)  {   
            printf("%d \t",i);
            }   
            i--;
        }
    }
    else
    {
        printf("Input is invalid");
    }
    
 }
    

