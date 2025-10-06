#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ViTube {
	char title[1001];
	char name[1001];
	int views;
};

ViTube Table[1001];
int counter = 0;

void Sort (int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (Table[i].views == Table[j].views) {
				if (strcmp(Table[i].title, Table[j].title) > 0) {
					ViTube temp = Table[i];
					Table[i] = Table[j];
					Table[j] = temp;
				}
			} else{
				if (Table[i].views < Table[j].views) {
					ViTube temp = Table[i];
					Table[i] = Table[j];
					Table[j] = temp;
				}
			}
		}
	}
}


int main () {
	FILE *file = fopen("testdata.in", "r");
	if (file == NULL) {
		printf("Error Opening File\n");
	}
	
	int total;
	while (!feof(file)) {	
		fscanf(file, "%[^#]#%[^#]#%d\n", Table[counter].title, Table[counter].name, &Table[counter].views);
		counter++;
	}
	Sort(counter);
	
	for (int i = 0; i < counter; i++) {
		printf("%s by %s - %d\n", Table[i].title, Table[i].name, Table[i].views);
	}
	
	return 0;
}
