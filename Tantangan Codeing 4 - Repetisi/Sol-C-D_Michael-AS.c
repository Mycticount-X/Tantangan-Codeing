#include <stdio.h>

int main () {
	int num, loop;
	scanf("%d %d", &num, &loop);
	
	for (int i = 0; i <= loop; i++) {
		printf("%d\n", num + i);
	}
	
	return 0;
}
