#include <stdio.h>

void SortArr (int arr[], int len) {
	for (int i = 0; i < len; i++) {
		for (int j = i; j < len; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main () {
	int T;
	scanf("%d", &T);
	
	for (int t = 1; t <= T; t++) {
		int arr[25], summa = 0;
		for (int i = 0; i < 25; i++) {
			scanf("%d", &arr[i]);
			summa += arr[i];
		}
		
		SortArr(arr, 25);
		
		int M1 = arr[0] / 2;
		int M5 = arr[24] / 2;
		int M2 = arr[1] - M1;
		int M4 = arr[23] - M5;
		int M3 = (summa - (10 * M1) - (10 * M2) - (10 * M4) - (10 * M5)) / 10; 
		
		printf("Case #%d: %d %d %d %d %d\n", t, M1, M2, M3, M4, M5);
	}
	
	return 0;
}
