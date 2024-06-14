#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the 2 variables:\n");
    scanf("%d%d",&a,&b);
    printf("The value before swap\n");
    printf("The value of a=%d and b=%d\n",a,b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("The value after swap\n");
    printf("The value of a=%d and b=%d",a,b);
}
