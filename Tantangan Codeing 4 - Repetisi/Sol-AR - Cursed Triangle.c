#include <stdio.h>

int main () {
	int num, len;
	scanf("%d %d", &num, &len);
	
	for (int t = 0; t < num; t++) {
	    for (int y = 1; y <= len;y++) {
            for (int x = 0; x < len - y; x++) {
                printf(" ");
            }
            for (int x = 0; x < y; x++) {
                printf("*");
            }
            printf("\n");
        }
	}
	return 0;
}
    