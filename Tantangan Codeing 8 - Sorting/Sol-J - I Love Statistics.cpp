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
		int n;
		scanf("%d", &n);
		
		int arr[n]; long long max = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			max += arr[i];
		}
		
		SortArr(arr, n);
		
		double mean = (double) max / n;
		double median = 0;
		
		if (n % 2 == 0) {
			median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
		} else {
			median = arr[n / 2];
		}
		
		printf("Case #%d:\n", t);
		printf("Mean : %.2lf\n", mean);
		printf("Median : %.2lf\n", median);
		
	}
	
	return 0;
}
