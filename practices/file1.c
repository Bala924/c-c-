#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE* fptr;
    fptr=fopen("hi.txt","w");
    if(fptr==NULL)
    {
        printf("The file is not opened");
        exit(0);

    }
    else
    {
        printf("file is created successfully");
    }
}
