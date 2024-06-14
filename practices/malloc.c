#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the number of element you want to add\n");
    scanf("%d",&n);
    int*ptr=(int*)malloc(n*sizeof(int));
    if(*ptr==NULL)
    {
        printf("SSorry memory not allocated\n");
        exit(0);
    }
    else
    {
     printf("Enter the element you want to add\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum=sum+*(ptr+i);
    }
    printf("the sum of all element is %d",sum);
    free(ptr);
    }
}
