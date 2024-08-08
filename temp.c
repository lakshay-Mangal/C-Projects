#include<Stdio.h>

void main()
{
    printf("Enter a character");
    char a;
    scanf("%c",&a);

    if(a='c')
    {
        int c,f;
        printf("Enter temperature in Celsius");
        scanf("%d",&c);
        f=c*9/5 +32;
        printf("\n \n The temp in fahrehneit is %d", f);

    }
      else if(a='f')
    {
        int c,f;
        printf("Enter temperature in Fahrehneit");
        scanf("%d",&f);
        c=(f-32)*5/9;
        printf("\n \n The temp in Celsius is %d", c);

    }
    else
    {
        printf("Invalid Input");
    }
}