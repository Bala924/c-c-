#include<stdio.h>
void main()
{
    int result=add();
    printf("The addition is :%d\n",result);
}
int add()
{
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    return a+b;
}
