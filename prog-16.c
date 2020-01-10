# include<stdio.h>
main()
{
	int a= -1;
	int b=5;
	int c=0;
	int d=3;
	printf("%d\n,"(c=d)&&(d=a)||(b=c));
	printf("a=%d b=%d c=%d d=%d",a,b,c,d);
}
