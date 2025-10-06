#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Temperature {
	char city[1001];
	double suhu;
	double suhuumum;
	char measure;
};

Temperature Table[1001];
int counter = 0;

void Sort (int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (Table[i].suhuumum == Table[j].suhuumum) {
				if (strcmp(Table[i].city, Table[j].city) > 0) {
					Temperature temp = Table[i];
					Table[i] = Table[j];
					Table[j] = temp;
				}
			} else{
				if (Table[i].suhuumum > Table[j].suhuumum) {
					Temperature temp = Table[i];
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
		fscanf(file, "%[^#]#%lf#%c\n", Table[counter].city, &Table[counter].suhu, &Table[counter].measure);
		if (Table[counter].measure == 'F') {
			Table[counter].suhuumum = (Table[counter].suhu - 32) * 5.0 / 9.0;
		} else {
			Table[counter].suhuumum = Table[counter].suhu;
		}
		counter++;
	}
	Sort(counter);
	
	for (int i = 0; i < counter; i++) {
		printf("%s is %.2lf%c\n", Table[i].city, Table[i].suhu, Table[i].measure);
	}
	
	return 0;
}
