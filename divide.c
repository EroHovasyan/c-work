#include <stdio.h>

int main() {
	int a = 0;
	printf("enter number : ");
	scanf("%d", &a);

	if( a % 3 == 0 && a % 5 == 0) {
		printf("yes %d is divisible\n", a);
	}else{
		printf("unfortunately no\n");
	}
	return 0;

}
