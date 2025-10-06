#include <stdio.h>

long long BinarySumma (long long total[], long long max, int arrmax) {
	int left = 0, right = arrmax - 1; long long solve = -2;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (total[mid] <= max) {
			solve = mid;
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	
	return solve + 1;
}

int main () {
	int N;
	scanf("%d", &N);
	
	long long arr[N];
	long long memo[N];
	for (int i = 0; i < N; i++) {
		scanf("%lld", &arr[i]);
		if (i == 0) {
			memo[i] = arr[i];
		} else {
			memo[i] = memo[i - 1] + arr[i];
		}
	}
	
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		long long max;
		scanf("%lld", &max);
		
		long long res = BinarySumma (memo, max, N);
		printf("Case #%d: %lld\n", t, res);
	}
	
}

