#include<stdio.h>

void main()
{
    int num,per=0,temp;
     int i=1;
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;

    while(i<num)
    {
                if(num%i==0)
                { 
                    per=per+i;
                }
        i++;

    }
    printf("\n%d",per);

}