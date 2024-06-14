#include<stdio.h>
void main()
{
    int a;
re:    printf("Enter your number\n");
    scanf("%d",&a);
    switch(a)
    {
     case 1:
        printf("You entered 1");
        break;
     case 2:
        printf("You entered 2");
        break;
     case 3:
        printf("You entered 3");
        break;
     case 4:
        printf("You entered 4");
        break;
     case 5:
        printf("You entered 5");
        break;
     case 6:
        printf("You entered 6");
        break;
     default:
        printf("Your entered wrong number");
    }
goto re;
}
