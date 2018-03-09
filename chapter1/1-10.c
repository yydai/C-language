#include <stdio.h>
#define NONBLANK 'a'

int main(int argc, char *argv[])
{
	int c, lastc;

	lastc = NONBLANK;
	while((c = getchar()) != EOF){
		if (c == '\t')
			printf("\\t");
		else if (c == '\\')
			printf("\\\\");
		else if (c == '\b')
			printf("\\b");
		else
			putchar(c);
	}
	return 0;
}
