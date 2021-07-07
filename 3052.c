#include <stdio.h>

int main() {

	int num[11] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		num[i] = num[i] % 42;
	}

	int count = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				count++;
				break;
			}
		}
	}
	
	printf("%d", 10 -count);
}