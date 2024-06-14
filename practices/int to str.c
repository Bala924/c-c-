#include<stdio.h>
void main()
{
    int n,i=0,j=0,k;

    scanf("%d",&n);
    while(1)
    {
        while(n!=0)
        {
            j = n % 10;
            k = k + j;
            n = n / 10;

            switch(n)
            {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            }
        }
    }




}
