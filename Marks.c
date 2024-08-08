#include<Stdio.h>

void main()
{
    int a,b,c,d,e;
    printf("Enter marks of 5 subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);


    if(a >100 || b>100 ||c>100 || d>100|| e>100)
    {
        printf("Maximum marks allowed are only 100 \n");
    }

   else if(a <36 || b<36 ||c<36 || d<36|| e<36)
    {
        printf("This Student has failed in his exams \n");
    }

    else
    {
        printf("The student has passed \n \n");

        float avg;
        avg = (a+b+c+d+e)/5;
        printf("The average of total marks is %f",avg);
    }
    
}