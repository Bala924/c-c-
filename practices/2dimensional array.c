#include<stdio.h>
void main()
{ int a[100][100],m,n;
printf("enter the number of elements in array\n");
scanf("%d%d",&m,&n);
printf("enter the  elements in array\n");
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        scanf("%d",&a[i][j]);

    }
}
    printf(" the  elements in array\n");
for(int i=1;i<=n;i++)
{
    printf("\n");

for(int j=1;j<=n;j++)
    {
        printf("%d \t",a[i][j]);
    }
}
}
