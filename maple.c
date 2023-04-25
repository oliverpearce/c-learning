#include <stdio.h>
#include <string.h>

/* functions must be declared before use!*/
int mult5(int par);
int runner();
static void carpet(void);

typedef struct {
	int x;
	int y;
} tpoint;

typedef struct {
	char *brand;
	int model;
} vehicle;

struct point {
	int x;
	int y;
};

void addone(int *n) {
	(*n)++;
}

void move(tpoint *p) {
    p->x++;
    p->y++;
}

int main() {
	
	/* functions */
	printf("---functions---\n");

	int x = 3;
	printf("value of x mult by 5 is %d\n", mult5(x));
	
	/* static */
	printf("---static---\n");

	printf("runner %d\n", runner());
	printf("runner %d\n", runner());

	carpet();

	/* pointers */
	printf("---pointers---\n");

	int a = 1;
	/* & returns memory address of a variable */
	int *pointer_to_a = &a;

	printf("the value of a is %d\n", a);
	/* * dereferences the pointer */
	printf("the value of a is also %d\n", *pointer_to_a);

	*pointer_to_a += 1;
	printf("the value of a is now %d!!!\n", a);

	printf("the memory address of a is %p\n", pointer_to_a);

	/* structures */
	printf("---structures---\n");

	struct point p;
	p.x = 10;
	p.y = 5;
	printf("x is %d and y is %d\n", p.x, p.y);

	tpoint tp;
	tp.x = 20;
	tp.y = 25;
	printf("x is %d and y is %d\n", tp.x, tp.y);

	vehicle car;
	car.brand = "Mitsubishi";
	car.model = 2006;
	printf("brand is %s, model is %d\n", car.brand, car.model);

	/* function args by reference */
	printf("---function args by reference---\n");

	int n;
	n = 5;
	printf("Before: %d\n", n);
	addone(&n);
	printf("After: %d\n", n);

	tpoint p1;
	p1.x = 25;
	p1.y = 30;
	printf("p1 before: %d, %d\n", p1.x, p1.y);
	move(&p1);
	printf("p1 after: %d, %d\n", p1.x, p1.y);

	return 0;
}

int mult5(int par){
        return par * 5;
}

/* static increases scope to file instead of local definition scope */
int runner() {
	/* static so count isnt removed from memory after function completes */
	static int count = 0;
      	count++;
	return count;       
}

/* static is scope set to file, global is scope set to file and accesable outside file */
static void carpet(void){
	printf("carpets are static, just like this function!\n");
}
