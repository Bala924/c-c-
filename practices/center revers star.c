#include<stdio.h>
void main()
{
    int i,j,k,r;
    printf("enter the no of rows\n");
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        printf("\t\t\t\t\t\t");
        for(j=0;j<r-1;j++)
        {
            printf("  ");

        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");

        }
        printf("\n");
    }
}


