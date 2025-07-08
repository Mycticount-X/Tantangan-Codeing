#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		int num;
		scanf("%d", &num);
		
		int skor[num];
		int max = 0;
		for (int i = 0; i < num; i++) {
			scanf("%d", &skor[i]);
			if (skor[i] > max) max = skor[i];
		}
		
		int count = 0;
		for (int i = 0; i < num; i++) {
			if (skor[i] == max) count++;
		}
		
		printf("Case #%d: %d\n", t, count);
	}
	return 0;
}
