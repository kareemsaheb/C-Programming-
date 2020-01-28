#include<stdio.h>
int main()
{
	int product=1,num,rem;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==0)
		product=0;
	else
		while(num>0)
		{
			rem = num%10;
			product*=rem;
			num=num/10;
		}
	printf("Product of digits =%d\n",product);
	return 0;
}

