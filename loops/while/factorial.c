#include<stdio.h>
int main()
{
	int num,n;
	long fact=1;
	printf("Enter a number:");
	scanf("%d",&num);
	n=num;
	if(num<0)
		printf("No factorial for 0 and neitive numbers:..\n");
	else
	{
		while(num>1)
		{
			fact=fact*num;
			num--;
		}
		printf("Factorial of %d=%ld\n",n,fact);
	}
	return 0;
}

