#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  N  100000
#define  UPB  20

int a[N];
int b[UPB];
void gen_random(int upper_bound)
{
	int i;
	// 初始化随机种子
	srand(time(NULL));
	for (i = 0; i < N; i++ )
	{
		a[i] = rand() % upper_bound;
	}
}

int howmany()
{
	int count = 0, i;
	
	for (i = 0; i < N; i++)
	{
		b[a[i]] = b[a[i]] + 1;
	}
	return 0;
}

int main(void)
{
	int i;

	gen_random(UPB);
	howmany();
	for (i = 0; i < UPB; i++)
		printf("%d\t%d\n", i, b[i]);

	return 0;
}