/* intruducing scanf 
   it will take first param as string constant and remaining param's address according to formate specifier mention in first param

   it will wait on user input depends on first param format speifiers.
 */
#include <stdio.h>
int main()
{
	char ch;
	short int i;
	printf("Enter a char:");
	scanf("%c",&ch); // libc(C library) function
	printf("ch=%c\n",ch);
	return 0;
}
