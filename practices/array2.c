void main()
{
    int a[]={14,90,30,140,4,50,18,48};
    int size=sizeof(a)/sizeof(int);
    int maximum=maxvalue(a,size);
    int minimum=minvalue(a,size);
    printf("The largest value in array is %d\n",maximum);
    printf("The smallest value in array is %d\n",minimum);
}
int maxvalue(int arr[],int size)
{
    int i;
    int large=arr[0];
    for(i=1;i<size;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    return large;
}
int minvalue(int arr[],int size)
{
    int i;
    int small=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    return small;
}
