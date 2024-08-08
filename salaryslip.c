#include<stdio.h>

void main()
{
    int h,sal;
    float alot;
    char name[30],address[30],bank[30];
    printf("Enter your name,address and bank details \n");
    scanf("%s%s%s",name,address,bank);
    printf("Enter your salary and no. of holdiays you took \n "); 
    scanf("%d%d",&sal,&h);
    if(h==1)
    {
        alot=sal;
    }
    else if (h>=2 && h<=5)
    {
        alot=95*sal/100;
    }
    else if (h>5 && h<=14)
    {
        alot=9 *sal/10;
    }
    else if(h==15)
    {
        alot= sal/2e;
    }
    else
    {
        alot =0;
    }
    printf("\n Employee Details \n --------------------------");
    printf("\n Name :%s \n Address: %s \n Bank Details : %s \n Salary : %d \n Alotted : %0.2f",name,address,bank,sal,alot);
}