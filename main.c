#include <stdio.h>

void foo(void)
{
	int i = 0;
	printf("%d\n", i);
	i = 777;
}

void compare()
{
	double i = 20.0;
	double j = i / 7.0;

	if (j * 7.0 == i) 
		printf("Equal. \n");
	else 
		printf("Unequal. \n");
}

void example(int a)
{
	int b = a % 10;
	int c = (a - b) / 10 % 10;
	printf("%d, %d\n", b, c);
	printf("%d\n", b);
}


int main(void)
{
	foo();
	printf("hello张德修\n");
	foo();
	compare();
	example(76);
	return 0;
}
