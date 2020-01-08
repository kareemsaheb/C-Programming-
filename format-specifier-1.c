#include <stdio.h>
int main()
{
	char ch = 'a';
	printf("ch = %c %d %x %o\n", ch, ch, ch, ch);
	ch = ch-40;
	printf("ch = %c %d %x %o\n", ch, ch, ch, ch);
	return 0;
}
