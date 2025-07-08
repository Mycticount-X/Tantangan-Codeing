#include <stdio.h>


int main () {
	int num, test;
	scanf("%d", &num);
	scanf("%d", &test);
	
	int arr[num];
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	
	
	int tester;
	for (int i = 0; i < test; i++) {
		scanf("%d", &tester);
		for (int j = 0; j < num; j++) {
			if (arr[j] == tester) {
				arr[j] = -1;
			}
		}
	}
	
	int max = -1;
	for (int i = 0; i < num; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	
	printf("Maximum number is %d\n", max);
	
	return 0;
}
