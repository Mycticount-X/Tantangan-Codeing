#include <stdio.h>

int main () {
	int num;
	scanf("%d", &num);
	
	int summa = 0, temp;
	for (int i = 0; i < num; i++) {
		scanf("%d", &temp);
		summa += temp;
	}
	
	printf("%d\n", summa);
	
	return 0;
}
