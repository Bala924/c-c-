#include<stdio.h>
void main()
{

    int obm,tm=600;
    float per;
    printf("enter the total mark obtained by the student to find our grade \n");
    scanf("%d",&obm);
    per=(obm*100)/tm;
    printf("the grade obtained by the student is \n ");
    if(per>=80)
    {

        printf("destinction");
    }
    else
    {
            if(per>=60)
            {
                printf("first class");
            }
            else
            {
             if(per>=40)
             {

                 printf("second class");
             }
             else{
                printf("fail");
             }
            }
    }
}
