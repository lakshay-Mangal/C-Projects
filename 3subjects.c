#include<stdio.h>

void main()
{
    int rol,m1,m2,m3,ph,total,div;
    float per;
    char sname[20], fname[30],mname[30],address[30];

    printf("Enter Student name along with fathers and mothers name");
    scanf("%s %s %s",sname,fname,mname);
    printf("\n Now Enter address \n");
    scanf("%s",address);
    printf("Now enter your roll no. and contact no");
    scanf("%d %d",&rol,&ph);
    printf("Now enter marks of 3 subjects");
    scanf("%d %d %d",&m1,&m2,&m3);
    total =m1+m2+m3;
    per= (total/3);
    printf("\n-----------------------\n STUDENT DETAILS :\n");
    printf("\nName :%s\nFathers name :%s\nMothers name :%s\n Address :%s\nPhysics :%d\nChemsitry :%d \n CS :%d",sname,fname,mname,address,m1,m2,m3);
    printf("\n The total is %d out of 300",total);
    printf("\n The percentage is %0.2f \n \n",per);

    if(per<25)
        {
            printf("\n This Student has failed");
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
        else
        {
            printf("This Student has received A grade");
        }
    
}