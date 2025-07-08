#include <stdio.h>

int GeserJendela (long long arr[], long long maxtarg, int size) {
	int left = 0; long long summa = 0;
	int maxlen = -1;
	
	for (int right = 0; right < size; right++) {
		summa += arr[right];
		
		while (summa > maxtarg && left < right) {
			summa -= arr[left];
			left++;
		}
		
		if (summa <= maxtarg) {
			int currlen = right - left + 1;
			maxlen = (currlen > maxlen) ? currlen : maxlen;
		}
	}
	
	if (!maxlen) maxlen = -1;
	return maxlen;
}

int main () {
	int N;
	scanf("%d", &N);
	
	long long arr[N];
	for (int i = 0; i < N; i++) {
		scanf("%lld", &arr[i]);
	}
	
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		long long maxtarg;
		scanf("%lld", &maxtarg);
		
		int res = GeserJendela (arr, maxtarg, N);
		printf("Case #%d: %d\n", t, res);
	}
	
	
	return 0;
}
