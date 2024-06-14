#include<stdio.h>
void main()
{
    int size;
    int i,j;
    printf("Enter the size of an one dimensional array you want created :\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the %d values of one dimensional arrays:\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("The values of one dimensional array is:\n");
    for(j=0;j<size;j++)
        printf("%d\t",a[j]);
}
