#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		int num;
		scanf("%d", &num);
		
		for (int y = 0; y < num; y++) {
            for (int x = 0; x < num; x++) {
                if (x == y || x + y == num - 1 || x == 0 || y == 0 || x == num-1 || y == num-1) {
                    printf("*");
                } else printf(" ");
            }
            printf("\n");
        }
        printf("\n");
		}
		
		
	return 0;
}