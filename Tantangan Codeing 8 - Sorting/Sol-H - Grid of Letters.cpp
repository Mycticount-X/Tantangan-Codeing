#include <stdio.h>
#include <string.h>

void SortStr (char str[]) {
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		for (int j = i; j < len; j++) {
			if (str[i] > str[j]) {
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}


int main () {
	int row, num;
	scanf("%d %d", &row, &num);
	
	char strarr [202][202];
	
	for (int i = 0; i < row; i++) {
		scanf("%s", strarr[i]);
		SortStr(strarr[i]);
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = i; j < row; j++) {
			if (strcmp(strarr[i], strarr[j]) < 0) {
				char temp[202];
				strcpy(temp, strarr[i]);
				strcpy(strarr[i], strarr[j]);
				strcpy(strarr[j], temp);
			}
		}
	}
	
	for (int i = 0; i < row; i++) {
		printf("%s\n", strarr[i]);
	}
	
	return 0;
}



