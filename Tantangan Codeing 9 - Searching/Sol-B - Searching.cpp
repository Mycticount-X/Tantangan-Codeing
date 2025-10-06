#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa {
	char nim[102];
	char nama[102];
};

int main () {
	FILE *file = fopen("testdata.in", "r");
	int num;
	fscanf(file, "%d\n", &num);
	
	struct Mahasiswa Table[num];
	for (int i = 0; i < num; i++) {
		fscanf(file, "%s %s\n", Table[i].nim, Table[i].nama);
	}
	
	int test;
	fscanf(file, "%d\n", &test);
	
	char find[101];
	
	for (int t = 1; t <= test; t++) {
		fscanf(file, "%s\n", find);
		
		int found = 0;
		for (int i = 0; i < num; i++) {
			if (strcmp(find, Table[i].nim) == 0) {
				printf("Case #%d: %s\n", t, Table[i].nama);
				found = 1;
				break;
			}
		}
		
		if (!found) {
			printf("Case #%d: N/A\n", t);
		}
	}
	
	
	fclose(file);
	
	
	return 0;
}
