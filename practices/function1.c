#include<stdio.h>
void main()
{
    printf("Welcome to main \n");
    chennai();
    printf("End of main \n");
}
void erode()
{
    printf("Welcome to Erode \n");
    salem();
    printf("End of Erode \n");
}
void salem()
{
    printf("Welcome to Salem \n");
    printf("End of Salem \n");
}
void chennai()
{
    printf("Welcome to Chennain \n");
    erode();
    printf("End of Chennai \n");
}
