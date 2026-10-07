#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	printf("enter a number: ");
	scanf("%d", &a);
	
	b = a % 10;
	printf("last digit is %d\n", b);
	return 0;

}
