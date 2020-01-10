#include <stdio.h>
int main()
{
	unsigned short int v=0; // 2 bytes range 0 to ((2 power n) - 1) = 65535
	// if its signed -32768 (- (2 pow n)/2 ) to 32767 (+ ((2 pow n)/2) - 1)
	printf("v=%hu\n",v);// unsigned short format specifier 
	v=v-1;// 0-1 = -1 ==>

	/* -1 binary equavilent is 
	   ------------------------------------------
	   1 binary in 2 bytes 	0000 0000 0000 0001
	   1's cmp of 1		1111 1111 1111 1110
	   +
	   +1			0000 0000 0000 0001
	   --------------------------------------------
	   =	1111 1111 1111 1111
	 */
	printf("v=%hu, v=0x%hX\n",v, v); //65535 -- 1111 1111 1111 1111 == > 0xFFFF
	printf("v=%d, v=0x%X\n",v, v); // signed int -2gb to + 2gb: [0x0000FFFF] == > 65535
	return 0;
}



