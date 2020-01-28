#include<stdio.h>
int main()
{
	int x,y,rem,quo;
	printf("enter a numbers:");
	scanf("%d%d",&x,&y);
	if (y)// if (y!=0)
	{
		rem=x%y;
		quo=x/y;
		printf("Quotient=%d Remainder=%d\n",quo,rem);
	}
	else
		printf("Divide by zero error\n");
	return 0;
}
