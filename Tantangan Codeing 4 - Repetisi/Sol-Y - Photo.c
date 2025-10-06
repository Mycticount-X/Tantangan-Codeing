#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
    	int hei, len;
    	scanf("%d %d", &hei, &len);
        printf("Case #%d:\n", t);
        for (int y = 0; y < hei; y++) {
            for (int x = 0; x < len; x++) {
                if (x == 0 || y == 0 || x == len - 1 || y == hei - 1) printf("#"); else printf(" ");
            }
            printf("\n");
        }
	}
	return 0;
}
