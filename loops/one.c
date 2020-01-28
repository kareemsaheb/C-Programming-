#include<stdio.h>
int main()
{
	short int a,b;
	printf("Enter a two numbers:");
	scanf("%hd %hd",&a,&b);
	if(a>b)
		printf("%hd is bigger one\n",a);
	else
		printf("%hd is bigger one\n",b);
	return 0;
}
