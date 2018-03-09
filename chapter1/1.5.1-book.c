#include <stdio.h>

int main(int argc, char *argv[])
{
	int c;
	// c = getchar();
	/* while (c != EOF) { */
	/*	putchar(c); */
	/*	c = getchar(); */
	/* } */

	// version 2
	while((c = getchar()) != EOF) {
		putchar(c);
	}
	return 0;
}
