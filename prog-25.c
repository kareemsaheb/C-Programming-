#include<stdio.h>
main()
{
	int n;
	n=sizeof(int);
	printf("n=%d\n",n);
	n=sizeof(10);
	printf("n=%d\n",n);
	n=sizeof(n);
	printf("n=%d\n",n);

}
