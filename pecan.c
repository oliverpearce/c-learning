#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char *name;
	int age;
} person;

unsigned int factorial(unsigned int x) {
	if (x == 1) {
		return 1;
	}
	else if (x > 1) {
		return x * factorial(x-1);
	}
	return 1;
}

int main() {
	
	/* dynamic allocation  */
	printf("---dynamic allocation---\n");

	/* malloc reserves size of person in bites */
	/* person* typecasts malloc since by default is void ptr */
	person *myperson = (person*) malloc(sizeof(person));

	/* -> used instead of . because of pointers */
	myperson->name = "Megan";
	myperson->age = 20;

	printf("name: %s, age: %d\n", myperson->name, myperson->age);

	/* free releases data that it points to, cant access anymore */
	free(myperson);
	
	/* arrays and pointers  */
	printf("---arrays and pointers---\n");

	int n = 5;
	char *pvowels= (char*) malloc(n * sizeof(char));
	int i;

	pvowels[0] = 'A';
	pvowels[1] = 'E';
	*(pvowels + 2) = 'I';
	pvowels[3] = 'O';
	*(pvowels + 4) = 'U';

	for (i = 0; i < n; i++) {
		printf("%c", pvowels[i]);
	}
	printf("\n");
	
	/* defining arrays like this is better as you don't need to waste
	 * memory if you are unsure how many elems you need, but need "free" */
	free(pvowels);

	/* recursion  */
	printf("---recursion---\n");

	printf("0! is %d, 5! is %d, and 7! is %d!\n", 
		factorial(0), factorial(5), factorial(7));

	return 0;
}
