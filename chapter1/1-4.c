#include <stdio.h>

int main(int argc, char *argv[])
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Fahr  Celsius\n");
	while(celsius <= upper) {
		fahr = 9.0 * celsius / 5.0 + 32;
		printf("%3.0f  %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
