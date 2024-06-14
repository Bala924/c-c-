#include<stdio.h>>
void main()
{
    int a,b;
    printf("Enter any 2 numbers\n");
    scanf("%d%d",&a,&b);
    add(a,b);

}
void add(int x,int y)
{
    int result=x+y;
    printf("The addition is :%d",result);
}
