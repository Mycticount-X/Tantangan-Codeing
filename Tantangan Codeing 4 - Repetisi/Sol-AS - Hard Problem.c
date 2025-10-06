#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		int num;
		scanf("%d", &num);
		
		char lili[num+3];
		char ans[num+3];
		scanf("%s", lili);
		scanf("%s", ans);
		
		int correct = 0;
		for (int i = 0; i < num; i++) {
			if (lili[i] == ans[i]) correct++;
		}
		
		int score = correct * 100 / num;
		
		printf("Case #%d: %d\n", t, score);
	}
	return 0;
}
