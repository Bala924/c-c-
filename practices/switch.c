#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,result;
    char arit_op;
    printf("Enter any two number\n");
    scanf("%d%d",&a,&b);
    printf("Enter the arithmetic operation you want (+,-,*)");
    arit_op=getch();
    switch(arit_op)
    {
    case '+':
        result=a+b;
        printf("\nThe add is:%d",result);
        break;
    case '-':
        result=a-b;
        printf("\nThe sumbraction is:%d",result);
        break;
    case '*':
        result=a*b;
        printf("\nThe multiplication is:%d",result);
        break;
    default:
        printf("You Enter invalid symbol");
    }
}
