#include <stdio.h>

int main () {
	int num, segitiga;
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &segitiga);
		for (int y = 0; y < segitiga; y++) {
			for (int x = 1; x < segitiga - y; x++) {
				printf(" ");
			}
			
			for (int x = 0; x < (y*2)+1 ; x++) {
				printf("*");
			}
			printf("\n");
		}
	}
	
	return 0;
}
