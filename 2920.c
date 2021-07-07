#include <stdio.h>

int main() {
	
	int scale[8];
	int a = 0, b = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &scale[i]);
	}

	for (int i = 0; i < 8; i++) {
		if (scale[i] == i + 1) {
			a++;
		}
		else if (scale[i] == 8 - i) {
			b++;
		}
	}

	if (a == 8) {
		printf("ascending");
	}
	else if (b == 8) {
		printf("descending");
	}
	else {
		printf("mixed"); 
	}
	
	return 0;
}