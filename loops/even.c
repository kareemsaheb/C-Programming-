#include<stdio.h>
int main()
{
	unsigned short int num;
	printf("Enter a number:");
	scanf("%hu",&num);
	if (num%2==0)
		printf("Number is Even\n");
	else
	{
		printf("number is odd\n");
		num+=1;
		printf("Now number is Even..%hu\n",num);
	}
	return 0;
}
