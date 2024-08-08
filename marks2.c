#include<Stdio.h>

void main()
{
    int a,b,c,d,e;
    printf("Enter marks of 5 subjects \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);


    if(a >100 || b>100 ||c>100 || d>100|| e>100)
    {
        printf("Maximum marks allowed are only 100 \n");
    }

   else if(a <40 || b<40||c<40 || d<40|| e<40)
    {
        printf("This Student has failed in his exams \n");
    }

    else
    {
        printf("The student has passed \n----------------------- \n");

        float per=0;
        per = ((a+b+c+d+e)/500)*100;
        printf("The percentage is %0.2f",per);
    }
    
}