#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Kamus {
	char from[102];
	char to[102];
};

int main () {
	FILE *file = fopen("testdata.in", "r");
	int num;
	fscanf(file, "%d\n", &num);
	
	struct Kamus KamusKata[num];
	for (int i = 0; i < num; i++) {
		fscanf(file, "%[^#]#%[^\n]\n", KamusKata[i].from, KamusKata[i].to);
	}
	
	int test;
	fscanf(file, "%d\n", &test);
	
	char kalimat[102];
	char* result;
	
	for (int t = 1; t <= test; t++) {	
		fscanf(file, "%[^\n]\n", kalimat);
		
		result = strtok(kalimat, " ");
		printf("Case #%d:\n", t);
		
		
		while (result != NULL) {
			for (int i = 0; i < num; i++) {
				if (strcmp(result, KamusKata[i].from) == 0) {
					printf("%s", KamusKata[i].to);
					break;
				}
				
				else if (i == num - 1) {
					printf("%s", result);
				}
			}
			
			result = strtok(NULL, " ");
			if (result != NULL) {
				printf(" ");
			}
			
		}
		printf("\n");
		
	}
	
	fclose(file);
	
	
	return 0;
}
