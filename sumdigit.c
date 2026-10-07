#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int last_digit = 0;
	int middle_digit = 0;
	int first_digit = 0;
	int sum = 0;
	printf("enter three digits number : ");
	scanf("%d", &a);

	last_digit = a % 10;
	b = a % 100;
	middle_digit = (b - last_digit) / 10;
	first_digit = (a - b) / 100 ;
	sum = first_digit + middle_digit + last_digit;
	printf("sum of digits : %d \n", sum);

	return 0;
}
