#include <stdio.h>
#include <string.h>

int main () {
	FILE *file = fopen("testdata.in", "r");
	if (file == NULL) {
		printf("Error: Tes Mycticount Xeta Ahlovely\n");
        return 1;
	}
	
	int a, b;
	fscanf(file, "%d %d\n", &a, &b);
	
	printf("%d\n", a+b);
	
	return 0;
}
