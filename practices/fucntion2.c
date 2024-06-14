#include<stdio.h>
void main()
{
    int a=10,b=20,result;
    result=add(a,b);
    printf("The addition is %d ",result);
}
int add(int x,int y)
{
    printf("Hello\n");
    return x+y;
}
