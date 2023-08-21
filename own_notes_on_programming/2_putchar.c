#include <stdio.h>
int main(void)
{      
	int b;
	putchar('X');//prints character X
	putchar(' ');//prints a space
	for(b=1; b<=10;b++)//prints ! 10 times
	{
		putchar('!');
	}
	putchar('\n');//prints a new line
	return 0;

}
