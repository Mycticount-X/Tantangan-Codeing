#include <stdio.h>
void convert(char *time) {
	int hour, mint;
	sscanf(time, "%d:%d", &hour, &mint);
	hour--;
	printf("%02d:%02d", hour, mint);
}

int main () {
	char course[16], time1[8], time2[8];
	for (int i = 0; i < 5; i++) {
		scanf("%s %5s-%5s", course, time1, time2);
		printf("%s ", course);
		convert(time1);
		printf("-");
		convert(time2);
		printf("\n");
	}
	
	return 0;
}
