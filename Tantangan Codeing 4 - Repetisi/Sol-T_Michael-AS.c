#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
    int counter = 0;
	for (int t = 1; t <= test; t++) {
		int num, solved, read;
		scanf("%d %d %d", &num, &solved, &read);
		
		if (read < solved) counter++;
	}
    printf("%d\n", counter);
    
	return 0;
}
