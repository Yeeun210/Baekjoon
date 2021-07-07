#include <stdio.h>
int main() {
	int cycle = 0;
	int num;
	scanf("%d", &num);
	int result = 0;
	result = num;
	while (num != result || cycle ==0) {
		result = result % 10 * 10 + (result / 10 + result% 10) % 10;
		cycle++;
	}	
	printf("%d", cycle);
	return 0;
}