#include<stdio.h>

void main()
{
    char a;
    printf("Enter a character \n");
    scanf("%c",&a);

    if(a=='e')
    {   int num;
        printf("Enter a number");
        scanf("%d",&num);

        if(num%2==0)
        {
            printf("This number is even");
        }
        else
        {
            printf("This number is odd");
        }
    }
    else if(a=='v')
    {
        int age;
        printf("Enter your age \n   ");
        scanf("%d",&age);
        if(age>=18)
        {
            printf("Voter ID is valid");
        }
        else
        {
            printf("Invalid Voter ID");
        }
    }
    else if(a=='m')
    {       int month;
        printf("Enter the month");
        scanf("%d",&month);
        if((month>=1 && month<4) ||month==12)
        {
                printf("This is winter season");
        }
        else if(month>=4 && month <8)
        {
            printf("This is summer or pre-monsoon season");
        }
        else if (month>=8 && month <=10)
        {
            printf("This is Monsoon season");
        }
        else if(month==11)
        {
            printf("This is post monsoon- pre winter season");
        }
        else
        {
            printf("There are only 12 months in a season");
        }
    }
    else if (a=='m')
    {   char name[20];
        float per;
        int m1,m2,m3,m4,m5,total;
        printf("Enter your name \n");
        scanf("%s",name);
        printf("Enter your marks of 5 subjects");
        scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
        total=m1+m2+m3+m4+m5;
        per= total/5;
        printf("\nSTUDENT DETAILS \n -----------------------\n");
        printf("Name : %d \n",name);
        printf("Physics:%d \n chemistry %d \n maths %d \n science %d \n Social %d",m1,m2,m3,m4,m5);
        if(per>=80)
        {
            printf("\n Grade : A");
        }
        else if (per>65 &&per<80 )
        {
            printf("\n Grade : B");
        }
        else if (per<65 &&per>=50 )
        {
            printf("\n Grade : C");
        }
        else if (per>36 &&per<50 )
        {
            printf("\n Grade : D");
        }
        else if (per<36 )
        {
            printf("\n Grade : FAIL");
        }
        else
        {printf("Entered marks are wrong");}
    }
    else if(a=='k')
    {
    char a;
    printf("Enter a character\n");
    scanf(" %c",&a);

    if(a=='q' || a=='w' || a=='e'|| a=='r' ||a=='t' || a=='y' || a=='u'|| a=='i'|| a=='o'|| a=='p'  )
    {
        printf("Upper line");
    }

    else if(a=='a' || a=='s' || a=='d'|| a=='f' ||a=='g' || a=='h' || a=='j'|| a=='k'|| a=='l' )
    {
        printf("Middle line");
    }
    else if(a=='z' || a=='x' || a=='c'|| a=='v' ||a=='b' || a=='n' || a=='m' )
    {
        printf("Bottom line");
    }
    else
    {
        printf("Input not valid");
    }   
 }
 else if(a=='c')
 {      char x;
    printf("Enter a character again \n");
    scanf(" %c",&x);
    if(x=='a'||x=='e' ||x=='i'||x=='o' ||x=='u')
    {
        printf("This is small case vowel");

    }
    else if(x=='A'||x=='E' ||x=='I'||x=='O' ||x=='U')
    {
        printf("This is Capital Case vowel");
    }
    else
    {
        printf("Given character is consonent");
    }
 }
    else if(a=='s')
    {  
        char a;
        printf("Enter a character");
        scanf(" %c",&a);
        if(a=='w')
        {   int a,b;
            printf("\n Enter 2 numbers");
            scanf(" %d%d",&a,&b);
            a=a+b;
            b=a-b;
            a=a-b;
            printf("New A is %d \n New b is %d",a,b);
        }
        else if(a=='o')
        {   int a,b,c;
            printf("Enter 2 numbers");
            scanf(" %d%d",&a,&b);
            c=a;
            a=b;
            b=c;
            printf("New A is %d \n New B is %d",a,b);
        }
        else
        {
            printf("Input is invalid");
        }
    }
 else
 {
    printf("Given Character input is invalid");
 }
}