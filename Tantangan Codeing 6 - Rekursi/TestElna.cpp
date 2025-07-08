#include <stdio.h>

int main () {
	
	FILE *f = fopen ("testdata.txt", "r");
	
	if (f == NULL) {
		printf ("ERROR");
		return 1;
	}
	
	int test;
	
	/*
	int area;
	int perim;
	int perim_hor;
	int perim_ver;
	*/
	fscanf (f, " %d", &test);
	for (int i=0;i<test;i++) {
		int length;
		int num [101];
		int	area=0;
		int perim=0;
		int perim_hor=0;
		int perim_ver=0;
		fscanf (f, " %d", &length);
//	printf ("%d\n", length);
		
		for (int j=0;j<length;j++) {
		fscanf (f, " %d", &num [j]);
		area+=num [j];
			if (j==0 || j==length-1) {
			perim_ver+=2*num[j];
			}
		}
		area=area*4;			
		perim_hor=4*length;		
		
		for (int j=0;j<length;j++) {
			int temp;
			 if (num [j] < num [j+1]) { //2 1 3
				temp=2*(num[j+1]-num [j]);
				perim_ver += temp;	
			} else {
				temp=2*(num[j]-num [j-1]);
				perim_ver += temp;
			}
		}
//		printf ("%d\n", perim_ver);
//		printf ("%d\n", perim_hor);
		perim= perim_ver+perim_hor;
		
		printf ("Case #%d: %d %d\n", i+1, perim, area);
		
	}
	
	fclose (f);
	
	return 0;
}
