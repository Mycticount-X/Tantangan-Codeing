#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		int num;
		scanf("%d", &num);
        
        int frogmeter = 0;
        int jumpcounter = 0;
		while (frogmeter < num) {
			frogmeter += jumpcounter + 1;
            jumpcounter ++; 
		}
		
		printf("Case #%d: %d\n", t, jumpcounter);
	}
	return 0;
}
