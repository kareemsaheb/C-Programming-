/* intruduction dummy addition */

#include <stdio.h>
int main()
{
	int x=10,y=20,z=30;
	printf("%d\n",x+y+z+1);
	y+(z=x);
	printf("%d %d %d \n",x,y,z);
	return 0;
}
