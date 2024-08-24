#include<stdio.h>

void arm(int a );
void palin(int a);
void checkeven(int a );
void rev(int a);
void count(int a );
void sum(int a);
void neon(int a);

int main()
{
    printf("Enter a character");
    char c;
    scanf("%c",&c);

    if(c=='a')
    {   int x;
    printf("Enter a number");
     scanf("%d",&x);
        arm(153);
    }
    if(c=='b')
    { int x;
    printf("Enter a number");
     scanf("%d",&x);
        palin(x);
    }
    if(c=='c')
    { int x;
    printf("Enter a number");
     scanf("%d",&x);
        checkeven(x);
    }
    if(c=='d')
    { int x;
    printf("Enter a number");
     scanf("%d",&x);
        rev(x);
    }
    if(c=='e')
    { int x;
    printf("Enter a number");
     scanf("%d",&x);
        count(x);
    }
    if(c=='f')
    { int x;
    printf("Enter a number");
     scanf("%d",&x);
        sum(x);
    }
    if(c=='g')
    { int x;
    printf("Enter a number");
     scanf("%d",&x);
        neon(x);
    }
}
 void arm(int n)
 {
    int temp,arm=0;
   
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
 

 void rev(int a)
 {
    int n,temp,rev=0,x;
    temp=n;

    while(a!=0)
    {
        x=a%10;
        rev=rev*10+x;
        a=a/10;
    }
    printf("Reverse is %d",rev);
 }
 
 void palin(int a)
 {
    int temp,rev=0,x;

    temp=a;

    while(a!=0)
    {
        x=a%10;
        rev=rev*10+x;
        a=a/10;
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
 void checkeven(int a)
 {  
    
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
 }
 void count(int a)
 {
    int num,count=0,x,y;
   
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    printf("The no. of digits is %d",count);
 }

 void sum(int a)
 {
    
    int sum=0,x,y;
    while(a!=0)
    {
        x=a%10;
        sum=sum+x;
        a=a/10;
    }
    printf("The sum is %d",sum);
 }

 void neon(int a)
 {
    int num,x,temp,y,neon=0;
   
    temp=a;
    int sq=a*a;
    while(sq!=0)
    {   
        x=sq%10;
        neon=neon+x;
        sq=sq/10;

    }
    if(neon==a)
    printf("The no.%d is neon",neon);
    else
    printf("not neon");
 }