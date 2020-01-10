/*!
This program will explain garbage behaviour in computer.
Here after multiple runs, we found garbage as 0x8. It means this is the ascii value of backspace.
So ch print not comming.

Computer only understands binary see the examples below

eg:
int v = 10; // decimal computer-> 00001010
int v = 0x10; // hexa decimal value, computer -> 00010000
int v = 'A'; // character computer -> 01000001
int v = " "; // posiible no use. Will discuss later. (pointer concepts TBD) 
*/

#include <stdio.h>
int main()
{
	char ch;
	char v1;
	ch='A';// assignemnt statement
	putchar(ch);
	putchar(v1);
	return 0;
}

