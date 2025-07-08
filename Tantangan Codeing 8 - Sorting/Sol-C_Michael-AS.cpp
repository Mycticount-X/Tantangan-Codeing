#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Flora {
	char nim[20];
	char name[40];
};

Flora Table[1001];
int counter = 0;

void Sort (int size) {
	int swap = 0;
	for (int i = 0; i < size; i++) {
		swap = 0;
		for (int j = i; j < size; j++) {
			if (strcmp(Table[i].nim, Table[j].nim) > 0) {
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
		fscanf(file, "%s %[^\n]", Table[counter].nim, Table[counter].name);
		counter++;
	}
	
	Sort(total);
	
	for (int i = 0; i < total; i++) {	
		printf("%s %s\n", Table[i].nim, Table[i].name);
	}
	
	return 0;
}
