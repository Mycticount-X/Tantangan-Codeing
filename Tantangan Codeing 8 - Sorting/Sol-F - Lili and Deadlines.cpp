#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Matkul {
	char matkul[1001];
	int deadline;
};

Matkul Table[1001];
int counter = 0;

void Sort (int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (Table[i].deadline == Table[j].deadline) {
				if (strcmp(Table[i].matkul, Table[j].matkul) > 0) {
					Matkul temp = Table[i];
					Table[i] = Table[j];
					Table[j] = temp;
				}
			} else{
				if (Table[i].deadline > Table[j].deadline) {
					Matkul temp = Table[i];
					Table[i] = Table[j];
					Table[j] = temp;
				}
			}
		}
	}
}


int main () {
	int T;
	scanf("%d", )
		int total;
		scanf("%d", &total);
		for (int i = 0; i < total; i++) {
			scanf("%s %d", Table[i].matkul, &Table[i].deadline);
		}
		
		Sort(total);
		
		for (int i = 0; i < total; i++) {
			printf("%s\n", Table[i].matkul);
		}
	
	return 0;
}
