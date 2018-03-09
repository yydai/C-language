#include <stdio.h>
#define NONBLANK 'a'

int main(int argc, char *argv[])
{
	int c, lastc;

	lastc = NONBLANK;
	while((c = getchar()) != EOF){
		if (c != ' ' || lastc != ' ')
			putchar(c);
		lastc = c;
	}
	return 0;
}
