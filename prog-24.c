#include<stdio.h>
main()
{
	int a=111;
	int b=22;
	a^=b^=a^=b;
	printf("%d %d\n",a,b);
}
