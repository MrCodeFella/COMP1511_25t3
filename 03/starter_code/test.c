#include <stdio.h>

int main(void) {
	int number;

	while (scanf("%d", &number) == 1) {
		printf("%d\n", number);
	}
	
	return 0;
}