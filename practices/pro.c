#include<stdio.h>
int main()
{
    int x=4,y,z;
    y=--x;
    z=x--;
    printf("%d\t%d\t%d\n",x,y,z);
    return 0;
}
