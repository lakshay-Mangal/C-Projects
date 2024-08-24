#include<stdio.h>

void main()
{
    char c;
    printf("Enter a character");
    scanf("%c",&c);
    
    if(c=='a')
    {   int num,temp,arm=0,x,y;
        printf("Enter a number");
        scanf("%d",&num);
        temp=num;
        
        while(num!=0)
        {
            x=num%10;
            arm=arm+(x*x*x);
            num=num/10;
        }
        if(arm==temp)
        {
            printf("Armstrong");
        }
        else
        {
            printf("Not Armstrong");
        }
    }
     else if(c=='p')
    {   int num,temp,rev=0,x,y;
        printf("Enter a number");
        scanf("%d",&num);
        temp=num;
        
        while(num!=0)
        {
            x=num%10;
            rev=rev*10+x;
            num=num/10;
        }
        if(rev==temp)
        {
            printf("Palindrome");
        }
        else
        {
            printf("Not Palindrome");
        }
    }
 else if(c=='e')
    {   int num,temp,x,y;
        printf("Enter a number");
        scanf("%d",&num);
        temp=num;
        
        
        if(num%2==0)
        {
            printf("Even");
        }
        else
        {
            printf("Not Even");
        }
    }
    else if(c=='r')
    {   int num,temp,rev=0,x,y;
        printf("Enter a number");
        scanf("%d",&num);
        temp=num;
        
        while(num!=0)
        {
            x=num%10;
            rev=rev*10+x;
            num=num/10;
        }
        printf("Reverse is %d \n\n",rev);
        if(rev==temp)
        {
            printf("Palindrome");
        }
        else
        {
            printf("Not Palindrome");
        }
    }
    else if(c=='c')
    {   int num,count=0,x;
        printf("Enter a number");
        scanf("%d",&num);
        
        while(num!=0)
        {
            x=num%10;
            count++;

            num=num/10;
        }
       printf("Digits are %d",count);
    }
    else if(c=='s')
    {   int num,sum=0,x;
        printf("Enter a number");
        scanf("%d",&num);

        
        while(num!=0)
        {
            x=num%10;
            sum=sum+x;

            num=num/10;
        }
       printf("Sum of digits is %d",sum);
    }
      else if(c=='f')
    {   int num,fact=1,x,i;
        printf("Enter a number");
        scanf("%d",&num);

        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
       printf("Factorial is is %d",fact);
    }
    else if(c=='g')
    {   int num,fact=1,x,i;
        printf("Enter a number");
        scanf("%d",&num);
        int a=0;
        int b=1;
        printf("%d%d",a,b);
        for(i=1;i<=num;i++)
        {
            x=a+b;
            a=b;
            b=x;
                   printf("%d",x);

        }
    }
    
}
