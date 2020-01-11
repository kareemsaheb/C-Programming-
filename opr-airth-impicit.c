/* 
   implicit conversion 2 rules
   1. In operation, will convert as according to higher order.
   -> float/real and int or char, real types are higher.
   -> More no of bytes for data type will be higher.
   -> If unsigned/signed, unsigned will be higher type.
   2. when assigning, will convert as LHS data type.

   unsigned/ signed => unsigned higher.
   int vs float => float will be higher.
   char vs int => int higher.

 */ 


#include <stdio.h>
int main()
{
	int x=5,y=2;
	float z;
	z=x/y;
	printf("%f\n",z);
	return 0;
}
