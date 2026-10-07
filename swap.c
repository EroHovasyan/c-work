#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int jam = 0;

	printf("enter two numbers: ");
	scanf("%d %d", &a, &b);

	jam = a;
	a = b;
	b = jam;

	printf("swap : %d %d\n", a, b);
	return 0;

}

