#include <stdio.h>

int main() {
	printf("Hello World!\n");
	
	/* variables */
	int a = 0, b = 2, c = 0;
	c = a + b;
	printf("%d\n", c);

	/* arrays */
	int numbers[10];
	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 30;
	numbers[3] = 40;
	numbers[4] = 50;
	numbers[5] = 60;
	numbers[6] = 70;

	printf("7th number in array is %d!!\n", numbers[6]);

	return 0;
}
