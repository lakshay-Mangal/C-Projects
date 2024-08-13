#include<stdio.h>

void main()
{   char x;
   
    printf("Enter an alphabet");
    scanf("%c",&x);

    if(x=='a')
    {    int sum=0,temp,num,i=0;
        printf("Armstrong number check \n \n");
        printf("Enter a number");
        scanf("%d",&num);
        temp=num;
        while(num!=0)
        {
            i=num%10;
            sum=sum+i*i*i;
            num=num/10;
        }
        printf("%d\n",sum);
        if(sum==temp)
        {
            printf("Armstrong");
        }
        else
        {
            printf("Not armstrong");
        }
    }
     if(x=='p')
    {    int rev=0,temp,num,i=0;
        printf("Palindrom number check \n \n");
        printf("Enter a number");
        scanf("%d",&num);
        temp=num;
        while(num!=0)
        {
            i=num%10;
            rev=rev*10+i;
            num=num/10;
        }
        if(rev==temp)
        {
            printf("palindrome");
        }
        else
        {
            printf("Not Palindrome");
        }
    }
      if(x=='r')
    {    int rev=0,temp,num,i=0;
        printf("Reverse a  number \n \n");
        printf("Enter a number \n");
        scanf("%d",&num);
        temp=num;
        while(num!=0)
        {
            i=num%10;
            rev=rev*10+i;
            num=num/10;
        }
        printf("\n The reverse is %d ",rev);
}
      if(x=='s')
    {    int sum=0,temp,num,i=0;
        printf("Addtion of number digits \n \n");
        printf("Enter a number");
        scanf("%d",&num);
        temp=num;
        while(num!=0)
        {
            i=num%10;
            sum=sum+i;
            num=num/10;
        }
        printf("The sum of digits is %d",sum);
}
}