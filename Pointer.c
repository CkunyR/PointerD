#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	int** pp = &p;//pp就是二级指针

	printf("%d\n", **pp);
	printf("%d\n", *p);

	**pp = 20;
	printf("%d\n", **pp);
	printf("%d\n", a);
	/*int*** ppp = &pp;
	int**** pppp = &ppp;
	int***** ppppp = &pppp;*/

	return 0;
}