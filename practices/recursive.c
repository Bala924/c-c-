#include<stdio.h>
void main()
{
    int num,result;
    printf("Enter any no to find factoral:\n");
    scanf("%d",&num);
    result=factorial(num);
    printf("The factorial of %d is %d ",num,result);
}
int factorial(int n)
{

    int fact;
    if(n==1)
    {
        return 1;
    }
    else
    {
        fact=n*factorial(n-1);
    }
    return fact;
}
