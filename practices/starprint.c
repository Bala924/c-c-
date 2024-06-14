#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter no of rows\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        {

            printf("*");


        }
        printf(" ");
    }
}
