#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
    int perfect = 1;
	for (int t = 1; t <= test; t++) {
		perfect = perfect * 2 + 1;
	}
    printf("%d\n", perfect);
	return 0;
}
