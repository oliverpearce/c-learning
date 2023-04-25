#include <stdio.h>
#include <string.h>

int main() {
	printf("Hello World!\n");
	
	/* variables */
	printf("---variables---\n");

	int a = 0, b = 2, c = 0;
	c = a + b;
	printf("%d\n", c);

	/* arrays */
	printf("---arrays---\n");

	int numbers[10];
	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 30;
	numbers[3] = 40;
	numbers[4] = 50;
	numbers[5] = 60;
	numbers[6] = 70;

	printf("7th number in array is %d!!\n", numbers[6]);
	
	/* multidimensional arrays */
	/* arr[x][y] - dont need x but NEED y */
	printf("---multidimensional arrays---\n");

	char vowels[][5] = {
		{'A', 'E', 'I', 'O', 'U'},
		{'a', 'e', 'i', 'o', 'u'}
	};
	
	int i;
	for (i = 0; i < 5; i++) {
		printf("%c\n", vowels[1][i]);
	}
	
	/* conditions */
	printf("---conditions---\n");

	int hovhannes = 15;
	int apol = 10;
	if (hovhannes > 10 && apol > 10) {
		printf("hovhannes and apol are more than 10! :0\n");
	} else if (hovhannes == 10 || apol == 10) {
		printf("someone is 10 :D\n");
	} else {
		printf("no one is 10 D:\n");
	}

	/* strings */
	printf("---strings---\n");

	char * name = "read only string";
	char text[] = "mutable string";
	/* can use text[idx+1] for the same result, add one for string termination char*/

	char * nerd = "Jade";
	printf("%s%ld\n", nerd, strlen(nerd));

	/* strncmp returns 0 if equal*/
	if (strncmp(nerd, "Jade", 4) == 0) {
		printf("Jade is indeed a nerd :D\n");
	} else {
		printf("who did what now\n");
	}

	/*strncat appends first n source characters to destination string*/
	char dest[10] = "Chicken";
	char src[20] = "Nuggets!!";
	strncat(dest, src, 3);
	printf("%s\n", dest);
	strncat(dest, src, 20);
	printf("%s\n", dest);

	/* for loops */
	printf("---for loops---\n");

	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = 0;
	int j;

	for (int j = 0; j < 10; j++) {
		sum += array[j];
	}

	printf("sum of the array is %d\n", sum);

	/* while loops */
	printf("---while loops---\n");

	int x = 0;
	/* loops infinitely if passed nonzero condition */
	while (1) {
		x++;

		if (x % 2 == 0) {
			continue;
		}

		if (x >= 20) {
			break;
		}

		printf("x is %d\n", x);
	}

	return 0;
}
