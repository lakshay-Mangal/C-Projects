#include<stdio.h>
void main()
{
    int bs, hra,da,ts;
    printf("Enter the basic salary of employee");
    scanf("%d",&bs);
    
    if(bs<=10000 && bs>0)
    {
        hra=bs/5;
        da=(bs*4)/5;
        ts=bs+hra+da;
        printf("The total salary of employee is %d",ts);
    }
    else if(bs<=20000)
    {
        hra=bs/4;
        da=(bs*9)/10;
        ts=bs+hra+da;
    printf("The total salary of employee is %d",ts);

    }
     else if(bs>20000)
    {
        hra=(bs*3)/10;
        da=(bs*95)/100;
        ts=bs+hra+da;
    printf("The total salary of employee is %d",ts);
    }
    else 
    {
        printf("Please enter a appropriate salary");
    }

    }
    
    