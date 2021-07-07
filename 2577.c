#include <stdio.h>

int main() {

	int A;
	int B;
	int C;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	int result[11] = { 0 };

	int sum = A * B * C;

	while (sum > 0) {
		result[sum % 10]++;
		sum = sum / 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", result[i]);
	}


	return 0;
}