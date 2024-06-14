#include<stdio.h>
void main()
{
    int num,result;
    printf("Enter any no to factorial:\n");
    scanf("%d",&num);
    result=factorial(num);
    printf("The fact of %d is %d:",num,result);
}
int factorial(int number)
{
    int fact=1;
    int i;
    for(i=number;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
