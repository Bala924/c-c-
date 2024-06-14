#include<stdio.h>
void main()
{
     char a;
    printf("Enter your number\n");
    scanf("%c",&a);
    switch(a)
    {
     case  'a':
        printf("You entered a");
        break;
     case 'b':
        printf("You entered b");
        break;
     case 'c':
        printf("You entered c");
        break;
     case 'd':
        printf("You entered d");
        break;
     case 'e':
        printf("You entered e");
        break;
     case 'f':
        printf("You entered f");
        break;
     default:
        printf("Your entered wrong character");
    }

}
