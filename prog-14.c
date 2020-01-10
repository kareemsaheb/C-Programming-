# include<stdio.h>
main()
{
	int a =-1;
	int b = 5;
	int c = 0;
	printf("%d\n",(a=b)||(b=c));
	printf("a=%d b=%d c=%d \n",a,b,c);
}
