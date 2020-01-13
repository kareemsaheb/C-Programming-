#include<stdio.h>
int main()
{
	short int a=8,b=5,c=8,d=3,e=65,f=10,g=2,h=5,k=2,result;
	result=(short int)a-b+c/d>=(unsigned short int)e/f-g+h%k;
	printf("result=%hd",result);
	return 0;
}

