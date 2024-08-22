/*
*
**
***
****
*****
****
***
**
*
*/
/*
*****
****
***
**
*
**
***
****
*****
    */
   #include<stdio.h>

   void main()
   {
        int i,j,a;
        printf("Enter a number");
        scanf("%d",&a);

        for(i=1;i<=a;i++)
        {
            for(j=0;j<i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(i=a;i>=1;i--)
        {
            for(j=i-1;j>0;j--)
            {
                printf("*");
            }printf("\n");
        }
   }