void main()
{
    int num[]={23,44,32,55,323,66,22,860,274,53,8,89};
    int size=sizeof(num)/sizeof(int);
    evenodd(num,size);
}
void evenodd(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
             printf("the number is even %d\n",arr[i]);

        }
        else
        {
            printf("the number is odd %d\n",arr[i]);
        }
    }
}
