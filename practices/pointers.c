#include<stdio.h>
void main()
{
    int i=3;
   int *j=&i;
    int **k;
    k=&j;
    printf("%d \n",i);
    printf("%d \n",j);
    printf("%d \n",k);
    printf("%d \n",&i);
    printf("%d \n",&j);
    printf("%d \n",&k);
    printf("%d \n",*j);
    printf("%d \n",*k);
    printf("%d \n",**k);
    **k=30;
    printf("%d \n",i);
    *j=300;
    printf("%d \n",j);
    *k=4000;
    printf("%d \n",j);
}
