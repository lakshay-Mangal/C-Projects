#include<stdio.h>

void main()
{
    int num,temp,x=0,per=0;
     int i=1;
    printf("Enter a number");
    scanf(" %d",&num);
    temp=num;

    while(num!=0)
    {
        
            for(i=1;i<=num;i++)
            {
                if(num%i==0)
                {   int x;
                    x=num/i;
                    per=per+x;
                    num=num/i;
                }

            }

    }
    printf("\n%d",per);

}