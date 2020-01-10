# include <stdio.h>
main()
{
	float a = -0.25;
	double b = -0.25;
	printf("%d\n",a==b);
	a = 1.7;
	b = 1.7;
	printf("%d\n",(double)a==b);
	printf("%d\n",a==(float)b);
	printf("%d\n",(double)a==(float)b);
}
