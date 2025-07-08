#include <stdio.h>

char Map[100][100];
int Visit[100][100];
int row, col;

int MapRush (int x, int y) {
	// Kecuali tembok, luar batas, atau sudah dikunjnungi
	if (x < 0 || x >= row || y < 0 || y >= col || Visit[x][y] || Map[x][y] == '#') {
		return 0;
	} Visit[x][y] = 1;
	
	int Flood = (Map[x][y] == '.') ? 1 : 0;
	
	Flood += MapRush(x-1, y);
	Flood += MapRush(x+1, y);
	Flood += MapRush(x, y-1);
	Flood += MapRush(x, y+1);
	
	return Flood;
}

int main () {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		scanf("%d %d", &row, &col);
		
		// Isi Map
		int sx = -1, sy = -1;
		for (int i = 0; i < row; i++) {
			scanf("%s", Map[i]);
			for (int j = 0; j < col; j++) {
				Visit[i][j] = 0;
				if (Map[i][j] == 'S') {
					sx = i;
					sy = j;
				}
			}
		}
		
		int flood = MapRush(sx, sy);
		printf("Case #%d: %d\n", t, flood);
	} return 0;
}

