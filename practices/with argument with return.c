#include<stdio.h>
void main()
{
    int a,b,result;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    result=add(a,b);
    printf("The addition is :%d\n",result);
}
int add(int x,int y)
{
    return x+y;
}
