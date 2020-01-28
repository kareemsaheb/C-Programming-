#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num<0)
	{
		printf("enter number is negitive\n");
		num=-num;
	}
	printf("Value of num is:%d\n",num);
	return 0;
}

