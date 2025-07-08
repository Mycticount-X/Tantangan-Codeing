#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	for (int t = 1; t <= test; t++) {
		int num;
		scanf("%d", &num);
		printf("Case #%d:\n", t);
		for (int y = num; y > 0; y--) {
			for (int x = 1; x <= num; x++) {
				if (x >= y && (x+y+num) % 2 == 0 || num == 0) {
					printf("#");
				} else if (x >= y && (x+y+num) % 2 == 1) {
					printf("*");
				} else printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
