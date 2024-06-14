#include<stdio.h>
void main()
{
    int a=10,b=20;
    printf("Before swap a=%d and b=%d \n",a,b);
    swap(a,b);
    printf("After swap a=%d and b=%d \n",a,b);
}
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d and y=%d \n");
}
