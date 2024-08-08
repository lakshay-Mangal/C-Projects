#include<Stdio.h>

void main()
{
    float a,b,c,d,e;
    printf("Enter marks of 5 subjects \n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);


    if(a >100 || b>100 ||c>100 || d>100|| e>100)
    {
        printf("Maximum marks allowed are only 100 \n");
    }

    else
    {
        printf("The student details are as follows : \n----------------------- \n");

        float per=0,avg=0;
        avg=(a+b+c+d+e)/5;
        per = ((a+b+c+d+e)/500)*100;
        printf("The percentage is %0.2f \n The average is %0.2f \n----------------------------- \n",per,avg);

        if(per<25)
        {
            printf("\n \n Unfortunately, This Student has failed");
        }
        else if (per>=25 && per<45)
        {
            printf("This student has received D grade");
        }
        else if (per>=45 && per<60)
        {
            printf("This Student has received C grade");
        }
        else if (per>=60 && per<80)
        {
            printf("This Student has received B grade");
        }
        else if (per >=80)
        {
            printf("This Student has received A grade");
        }
        else
        {
            printf("Some wrong in student details");
        }
    }
    
}