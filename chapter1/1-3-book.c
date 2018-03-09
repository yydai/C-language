#include <stdio.h>

int main(int argc, char *argv[])
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper) {
		celsius = 5.0 * (fahr - 32) / 9.0;
		printf("%3.0f\t%3.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
