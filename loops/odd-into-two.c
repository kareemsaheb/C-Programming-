#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%2==0)
		printf("The num is even\n");
	else
	{
		printf("the number is odd...\n");
		num*=2;
		printf("now number is even %d\n",num);
	}
	return 0;
} 
