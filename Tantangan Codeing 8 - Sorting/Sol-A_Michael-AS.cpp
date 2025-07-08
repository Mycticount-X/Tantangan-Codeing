#include <stdio.h>

void Merge (int arr[], int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int arrl[n1], arrr[n2];
	
	for (int i = 0; i < n1; i++) {
		arrl[i] = arr[left + i];
	}
	for (int i = 0; i < n2; i++) {
		arrr[i] = arr[mid + i + 1];
	}
	
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (arrl[i] < arrr[j]) {
			arr[k] = arrl[i];
			i++;
			k++;
		} else {
			arr[k] = arrr[j];
			j++;
			k++;
		}
	}
	
	while (i < n1) {
		arr[k] = arrl[i];
		i++; k++;
	}
	while (j < n2) {
		arr[k] = arrr[j];
		j++; k++;
	}
	
}

void MergeSort (int arr[], int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		MergeSort (arr, left, mid);
		MergeSort (arr, mid + 1, right);
		Merge (arr, left, mid, right);
	}
}

int main () {
	int n;
	scanf("%d", &n);
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	MergeSort(arr, 0, n - 1);
	
	int diff[n]; int maxdiff = -80000000;
	for (int i = 0; i < n - 1; i++) {
		diff[i] = arr[i + 1] - arr[i];
		if (maxdiff < diff[i]) {
			maxdiff = diff[i];
		}
	}
	
	int foundone = 0;
	for (int i = 0; i < n - 1; i++) {
		if (diff[i] == maxdiff) {
			if (foundone) printf(" ");
			printf("%d %d", arr[i], arr[i + 1]);
			foundone = 1;
		}
	} printf("\n");
	
	return 0;
}


