#include <stdio.h>

int main() {
	int a = 0;
	printf("enter number:");
	scanf("%d", &a);

	if( a % 2 == 0){
		printf("%d - even\n", a);
	}else{
		printf("%d - odd\n", a);
	}
	return 0;

}
