#include <stdio.h>
#include <string.h>

struct Data {
	char name[20];
	int skor;
} Table[1000];

void SortData (int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (Table[i].skor == Table[j].skor) {
				if (strcmp(Table[i].name, Table[j].name) > 0) {
					Data temp = Table[i];
					Table[i] = Table[j];
					Table[j] = temp;
				}
			}
			
			else if (Table[i].skor < Table[j].skor) {
				Data temp = Table[i];
				Table[i] = Table[j];
				Table[j] = temp;
			}
		}
	}
}

int SearchData (char targ[], int size) {
	for (int i = 0; i < size; i++) {
		if (strcmp(Table[i].name, targ) == 0) {
			return i + 1;
		}
	}
	
	return 0;
}


int main () {
	int T;
	scanf("%d", &T);
	
	for (int t = 1; t <= T; t++) {
		int n;
		scanf("%d", &n); getchar();
		int counter = 0;
		
		for (int i = 0; i < n; i++) {
			scanf("%[^#]#%d", Table[counter].name, &Table[counter].skor); getchar();
			counter++;
		}
		
		SortData(n);
		
		char targ[20];
		scanf(" %[^\n]", targ);
		
		int res = SearchData(targ, n);
		
		printf("Case #%d: %d\n",t , res);
	}
	
	
	return 0;
}
