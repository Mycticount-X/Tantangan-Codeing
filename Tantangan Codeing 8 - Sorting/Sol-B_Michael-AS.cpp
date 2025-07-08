#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Flora {
	int num;
	char name[50];
};

Flora Table[1001];
int counter = 0;

void Sort (int size) {
	int swap = 0;
	for (int i = 0; i < size; i++) {
		swap = 0;
		for (int j = i; j < size; j++) {
			if (strcmp(Table[i].name, Table[j].name) > 0) {
				Flora temp = Table[i];
				Table[i] = Table[j];
				Table[j] = temp;
				swap = 1;
			}
		}
		if (!swap) {
			break;
		}
	}
}


int main () {
	FILE *file = fopen("testdata.in", "r");
	if (file == NULL) {
		printf("Error Opening File\n");
	}
	
	int total;
	fscanf(file, "%d", &total);
	for (int i = 0; i < total; i++) {	
		fscanf(file, "%d#%[^\n]", &Table[counter].num, Table[counter].name);
		counter++;
	}
	
	Sort(total);
	
	for (int i = 0; i < total; i++) {	
		printf("%d %s\n", Table[i].num, Table[i].name);
	}
	
	return 0;
}
