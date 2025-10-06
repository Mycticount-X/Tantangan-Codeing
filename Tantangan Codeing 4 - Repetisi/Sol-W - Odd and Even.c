#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		int num;
		scanf("%d", &num);
		
		int odd = 0;
        int even = 0;
		for (int i = 0; i < num; i++) {
			int temp;
            scanf("%d", &temp);
            if (temp % 2 == 0) even++; else odd++;
		}
		
		printf("Odd group : %d integer(s).\n", odd);
        printf("Even group : %d integer(s).\n", even);
        printf("\n");
	}
	return 0;
}
