#include <stdio.h>

int main () {
	int num;
	scanf("%d", &num);
	
	int arr[num];
	for (int x = 0; x < num; x++) {
		scanf("%d", &arr[x]);
	}
	
	int counter = 0;
	int result[num];
	int step = 1;
	for (int i = 1; i < num; i++) {
		if (arr[i] == 1) {
			result[counter++] = step;
			step = 1;
		} else step++;
	}
	result[counter++] = step;
	
	for (int i = 0; i < counter; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", result[i]);
	}
	printf("\n");
	
	return 0;
}
