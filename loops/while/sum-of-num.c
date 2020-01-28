#include<stdio.h>
int main()
{
	int num,rem,res=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		res+= rem;
		num=num/10;
	}
	printf("Sum of digits =%d\n",res);
	return 0;
}


