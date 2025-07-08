#include <stdio.h>

int main () {
	int len;
	scanf("%d", &len);
	
	for (int y = 0; y < len; y++) {
		for (int x = 0; x < len; x++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
