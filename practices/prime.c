// C program to check if a number is prime using sqrt(n)
#include <math.h>
#include <stdio.h>
int main()
{
    int flag;
	printf("Enter your name:");
	scanf("%d",&flag);
   if (flag%2==0)
    {
		printf("%d is a prime number", flag);
	}
	else
    {
		printf("%d is not a prime number",flag);
	}
    return 0;
}

