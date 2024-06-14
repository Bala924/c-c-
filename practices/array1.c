#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50};
    int s=sizeof(a)/sizeof(int);
    printf("%d\n",s);
    myfunction(a,s);
}
void myfunction(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
