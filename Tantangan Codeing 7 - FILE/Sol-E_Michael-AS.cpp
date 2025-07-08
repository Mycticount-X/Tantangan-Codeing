#include <stdio.h>
#include <math.h>

int main () {
	FILE *file = fopen("testdata.in", "r");
	
	int T;
	fscanf(file, "%d\n", &T);
	
	for (int t = 1; t <= T; t++) {
		int N;
		fscanf(file, "%d\n", &N);
		
		int curr;
		int prev = 0;
		int all = 0;
		int kell = 0;
		int luas = 0;
		
		for (int i = 0; i < N; i++) {
			fscanf(file, "%d", &curr);
			
			if (i == 0) kell += 2 * curr;
			if (i == N-1) kell += 2 * curr;
			
			if (prev) {
				kell += 2 * abs(curr - prev);
			}
			
			
			kell += 4;
			luas += 4 * curr;
			
			prev = curr;
			
			
		}
		
		printf("Case #%d: %d %d\n", t, kell, luas);
		
	}
	
	fclose(file);
	
	return 0;
}
