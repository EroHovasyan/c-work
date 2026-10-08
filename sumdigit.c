#include <stdio.h>

int main() {
	int a = 0;
	int sum = 0;
	printf("enter three digits number : ");
	scanf("%d", &a);

	sum = (a / 100) + (a / 10 % 10) + (a % 10);
	printf("sum of digits : %d \n", sum);

	return 0;
}
