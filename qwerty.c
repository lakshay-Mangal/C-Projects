#include<stdio.h>

void main()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);

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