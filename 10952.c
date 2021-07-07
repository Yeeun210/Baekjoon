#include <stdio.h>

int main() {

	int num1;
	int num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	while (num1 != 0 || num2 !=0) {
		int sum;
		sum = num1 + num2;
		printf("%d\n", sum);
		scanf("%d", &num1);
		scanf("%d", &num2);
	}

	return 0;
}