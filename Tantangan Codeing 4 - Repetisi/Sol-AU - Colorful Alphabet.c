#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		int num;
		scanf("%d", &num);
		
        printf("Case #%d: ", t);
		for (int i = 0; i < num; i++) {
			printf("%c", i + 97);
		}
        printf("\n");
	}
	return 0;
}
