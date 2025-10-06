#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		int num;
		scanf("%d", &num);
		
        printf("Case #%d:\n", t);
        for (int i = 1; i <= num; i++) {
            printf("%d ", i);
            if ((i % 3 == 0 || i % 5 == 0) && i % 15 != 0) {
                printf("Jojo\n");
            } else printf("Lili\n");
        }
        
	}
	return 0;
}
    