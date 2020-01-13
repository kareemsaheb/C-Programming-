/* ch is char type ,printf can ptint in terminal enter a char:
getchar can take a input from terminal and assigned to the ch
printf char type (%c) format specifier can print the ch in character form ...supose u can give (%hd) type format specifier
it can print int type o/p according to the ASCII table..
*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a char:");
	ch=getchar();// getchar when executed willmake the process wait till input provide//
	printf("You have input %c",ch);
}
