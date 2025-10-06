#include <stdio.h>

int main () {
	int num;
	scanf("%d", &num);
	

	int index[num];
	for (int i = 0; i < num; i++) {
		scanf("%d", &index[i]);
	}
    
    int isi[num];
	for (int i = 0; i < num; i++) {
		scanf("%d", &isi[i]);
	}
    
    int arr[num];
	for (int i = 0; i < num; i++) {
		arr[index[i]] = isi[i];
	}
    for (int i = 0; i < num; i++) {
		printf("%d", arr[i]);
        if (i != num - 1) printf(" ");
	} printf("\n");
	
	return 0;
}
