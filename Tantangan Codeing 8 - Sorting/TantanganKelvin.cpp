#include <stdio.h>

int BinerCari (int arr[], int size, int left, int right, int targ) {
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == targ) {
			return mid;
		} else if (arr[mid] > targ) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	} return -2;
}

void merge (int arr[], int size, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	int a1[n1], a2[n2];
	for (int i = 0; i < n1; i++) {
		a1[i] = arr[left + i];
	}
	
	for (int i = 0; i < n2; i++) {
		a2[i] = arr[mid + i + 1];
	}
	
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (a1[i] > a2[j]) {
			arr[k] = a2[j];
			j++; k++;
		} else {
			arr[k] = a1[i];
			i++; k++;
		}
	}
	
	while (i < n1) {
		arr[k] = a1[i];
		i++; k++;
	} while (j < n2) {
		arr[k] = a2[j];
		j++; k++;
	}
}

void MergeSort (int arr[], int size, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		MergeSort(arr, size, left, mid);
		MergeSort(arr, size, mid + 1, right);
		merge (arr, size, left, mid, right);
	}
}

int main () {
	int N;
	scanf("%d", &N);
	
	
	int arr[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	
	MergeSort(arr, N, 0, N-1);
	
	int T; scanf("%d", &T);
	while (T--) {
		int tm;
		scanf("%d", &tm);
		
		int res = BinerCari (arr, N, 0, N-1, tm);
		printf("%d\n", res+1);
	}
}
