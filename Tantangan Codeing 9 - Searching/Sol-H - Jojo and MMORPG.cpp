#include <stdio.h>

void Merge (long long arr[], int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	long long al[n1], ar[n2];
	
	for (int i = 0; i < n1; i++) {
		al[i] = arr[i + left];
	}
	
	for (int i = 0; i < n2; i++) {
		ar[i] = arr[i + mid + 1];
	}
	
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (al[i] < ar[j]) {
			arr[k] = al[i];
			i++; k++;
		} else {
			arr[k] = ar[j];
			j++; k++;
		}
	}
	
	while (i < n1) {
		arr[k] = al[i];
		i++; k++;
	}
	
	while (j < n2) {
		arr[k] = ar[j];
		j++; k++;
	}
}

void MergeSort (long long arr[], int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		MergeSort (arr, left, mid);
		MergeSort (arr, mid + 1, right);
		Merge (arr, left, mid, right);
	}
}


int main () {
	int num; long long power;
	scanf("%d", &num);
	
	long long arr[num];
	for (int i = 0; i < num; i++) {
		scanf("%lld", &arr[i]);
	}
	
	scanf("%lld", &power);
	
	MergeSort(arr, 0, num - 1);
	
	int miss = 0;
	for (int i = 0; i < num; i++) {
		if (arr[i] > power) break;
		else {
			power -= arr[i];
			miss++;
		}
	}
	
	printf("%d\n", miss);
	
	return 0;
}
