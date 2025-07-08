#include <stdio.h>
#include <string.h>

long long swap = 0;

void BubbleSortArr (int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				swap++;
			}
		}
	}
}


int main () {
	
	int T;
	scanf("%d", &T);
	
	for (int t = 1; t <= T; t++) {
		int num, time;
		scanf("%d %d", &num, &time);
		
		swap = 0;
		
		int arr[num];
		for (int i = 0; i < num; i++) {
			scanf("%d", &arr[i]);
			
		}
		
		BubbleSortArr(arr, num);
		
		printf("Case #%d: %lld\n", t, swap*time);
	}
	return 0;
}


