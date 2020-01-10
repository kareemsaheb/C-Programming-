#include<stdio.h>
main()
{
	double d=1.2;
	int n;
	char ch='a';
	printf("%d\n",sizeof('a'));
	printf("%d\n",sizeof(ch));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(1.2));
	printf("%d\n",sizeof("12"));
	printf("%d\n",sizeof("12325"));
	printf("%d\n",sizeof("float"));
}
