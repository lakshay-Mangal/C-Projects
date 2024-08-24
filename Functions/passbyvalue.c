#include<stdio.h>
 
void show(int a);
int main()
{
    int num=913;
    show(num);
    return 0;
}
//function defination

void show(int a)
{   printf("This concept is called pass by value \n");
    printf("%d",a);
}