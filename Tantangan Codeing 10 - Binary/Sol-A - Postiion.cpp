#include <stdio.h>

int LeftmostBinary (int arr[], int targ, int size) {
	int left = 0, right = size - 1, solve = -2;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		
		if (arr[mid] == targ) {
			solve = mid;
			right = mid - 1;
		} else if (arr[mid] > targ) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	
	return solve + 1;
}

int main () {
	int N, T;
	scanf("%d %d", &N, &T);
	
	int arr[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	
	while (T--) {
		int prob;
		scanf("%d", &prob);
		
		int res = LeftmostBinary (arr, prob, N);
		printf("%d\n", res);
	}
	
	return 0;
}
