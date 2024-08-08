#include<stdio.h>

void main()
{
    int n,table[10],i;
    printf("Enter a number");
    scanf("%d",&n);

    printf("The table is \n");

    for(i=1;i<=10;i++)
    {
        table[i]= n*i;
        printf("%d * %d = %d \n",n,i,table[i]);
    }
}
