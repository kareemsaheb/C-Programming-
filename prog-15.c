# include<stdio.h>
main()
{
	int a=-1;
	int b=5;
	int c=0;
	int d=3;
	printf("%d\n",(b=c)||(c=d)||(d=a));
	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
}
