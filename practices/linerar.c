#include<stdio.h>
void main()
{
    int arr[]={23,22,43,12,65,32,87,43,25,44};
    int size,n;
    size=sizeof(arr)/sizeof(int);
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<=size;i++)
    {
        if(n==arr[i])
        {
            printf("The num %d is present in loc %d",arr[i],i+1);
            break;
        }

    }
    if(i>size)
    {
        printf("not found");
    }

}
