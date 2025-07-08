#include <stdio.h>


int Possible (int a, int b) {
	if (a == b) return 1;
	if (a == 1 && b != 1) return 0;
	
	if (a % 2 == 0)
		return Possible(a / 2, b);
	else
		return Possible(a * 3 + 1, b);
}


// Versi Looping...

//int Possible (int a, int b) {
//	while (a != b) {
//		if (a == 1) break;
//		// Jika mencapai 1 dan b bukan 1 udah pasti salah
//		
//		if (a % 2 == 0) {
//			a /= 2;
//		} else {
//			a = a * 3 + 1;
//		}
//	}
//	return a == b;
//}

int main () {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		long long a, b;
		scanf("%d %d", &a, &b);
		long long res = Possible(a,b);
		if (res) {
			printf("Case #%d: YES\n", t);
		} else {
			printf("Case #%d: NO\n", t);
		}
	} return 0;
}
