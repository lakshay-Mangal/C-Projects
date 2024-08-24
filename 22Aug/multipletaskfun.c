#include<stdio.h>

void arm();
void palin();
void checkeven();
void rev();
void count();
void sum();
void neon();

int main()
{
    printf("Enter a character");
    char c;
    scanf("%c",&c);

    if(c=='a')
    {
        arm();
    }
    if(c=='b')
    {
        palin();
    }
    if(c=='c')
    {
        checkeven();
    }
    if(c=='d')
    {
        rev();
    }
    if(c=='e')
    {
        count();
    }
    if(c=='f')
    {
        sum();
    }
    if(c=='g')
    {
        neon();
    }
}
 void arm()
 {
    int n,temp,arm=0;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        int x;
        x=n%10;
        arm=arm+x*x*x;
        n=n/10;
    }
    if(arm==temp)
    printf("The number %d is armstrong",arm);
    else
 {
    printf("Not armstrong");
 }
 }
 

 void rev()
 {
    int n,temp,rev=0,x;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    printf("Reverse is %d",rev);
 }
 
 void palin()
 {
    int n,temp,rev=0,x;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    printf("Reverse is %d",rev);
    if(rev==temp)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot palindrome");
    }
    
 }
 void checkeven()
 {  int n;
    printf("Enter a number");scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
 }
 void count()
 {
    int num,count=0,x,y;
    printf("Enter a number");
    scanf("%d",&num);

    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("The no. of digits is %d",count);
 }

 void sum()
 {
    printf("Enter a number");
    
    int num,sum=0,x,y;
    scanf("%d",&num);

    while(num!=0)
    {
        x=num%10;
        sum=sum+x;
        num=num/10;
    }
    printf("The sum is %d",sum);
 }

 void neon()
 {
    int num,x,temp,y,neon=0;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    int sq=num*num;
    while(sq!=0)
    {   
        x=sq%10;
        neon=neon+x;
        sq=sq/10;

    }
    if(neon==num)
    printf("The no.%d is neon",neon);
    else
    printf("not neon");
 }