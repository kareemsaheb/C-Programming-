#include<stdio.h>
int main()
{
	int a,b,c,Big;
	printf("Enter a number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(b<c)
			Big=c;
		else
			Big=b;
	}
	else
	{
		if(a>c)
			Big=a;
		else
			Big=c;
	}
	printf("Biggest number is %d\n",Big);
	return 0;
}
