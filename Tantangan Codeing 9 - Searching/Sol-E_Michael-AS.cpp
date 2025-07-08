#include <stdio.h>
#include <string.h>

void SortData (int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int BinarySearch (int arr[], int left, int right, int targ) {
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == targ)
			return mid;
		else if (arr[mid] > targ)
			right = mid - 1;
		else left = mid + 1;
	}
	
	return -1;
}

int MatchMaking (int arr[], int size, int targ) {
	if (arr[size - 1] == targ) {
		return size - 2;
	}
	
	int res = BinarySearch(arr, 0, size - 1, targ);
	
	return res;
}

int main () {
	int T;
	scanf("%d", &T);
	
	for (int t = 1; t <= T; t++) {
		int n;
		scanf("%d", &n); getchar();
		
		int arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		
		SortData(arr, n);
		
		int targ;
		scanf("%d", &targ);
		
		int res = MatchMaking(arr, n, targ);
		if (res == -1) {
			printf("CASE #%d: -1 -1\n", t);
			continue;
		}
		
		if (res == n - 2) {
			printf("CASE #%d: %d %d\n", t, arr[n - 2], arr[n - 1]);
		} else printf("CASE #%d: %d %d\n", t, arr[res], arr[res + 1]);
	}
	
	
	return 0;
}
