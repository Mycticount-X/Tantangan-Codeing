#include <stdio.h>

int main () {
	int hei, con;
	scanf("%d %d", &hei, &con);
	
	for (int y = 0; y < hei; y++) {
		for (int x = 0; x < hei; x++) {
			printf("#");
		}
		printf("\n");
	}
	printf("\n");
	
	for (int y = 1; y <= hei; y++) {
		for (int x = 1; x <= hei; x++) {
			if (y % con == 0) printf("#");
			else printf(".");
		}
		printf("\n");
	}
	printf("\n");
	
	for (int y = 1; y <= hei; y++) {
		for (int x = 1; x <= hei; x++) {
			if (x % con == 0) printf("#");
			else printf(".");
		}
		printf("\n");
	}
	
	return 0;
}
