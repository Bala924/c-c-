void main()
{
    int i,sum=0,num;
    printf("Enter your number:\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        num=num%10;
           num=num/10;
        sum=i*i*i+sum;

        if(num==sum)
        {
            printf("The number is armstrong");
        }
        else
        {

            printf("The number is not a armstrong");
        }
    }
}
