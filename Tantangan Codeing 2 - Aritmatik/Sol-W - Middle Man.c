#include <stdio.h>

int main () {
	getchar();
	int integer;
	for (int i=0; i < 3; i++) {
		scanf("%d", &integer);
		int mid = (integer / 10) % 10;
		printf("%d\n", mid);
	}
	return 0;
}
