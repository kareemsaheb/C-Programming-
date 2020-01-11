#include<stdio.h>
int main()
{
	int a=3;
	unsigned b = -5;
	int result = a>(signed int)b;
	printf("%d\n",result);
	result = a>b;
	printf("%d\n",result);
	return 0;
}
