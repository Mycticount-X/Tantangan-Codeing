#include <stdio.h>

void SummaDaon (int tree[], int n, int index, int sum) {
	// Index Overflow
	if (index > n) {
		return;
	}
	
	sum += tree[index];
	
	// Rumus ini... AVL & Binary Tree
	int left = 2 * index;
	int right = 2 * index + 1;
	
	// Apakah ini daun?
	if (left > n && right > n) {
		printf("%d\n", sum);
		return;
	}
	
	if (left <= n) SummaDaon(tree, n, left, sum);
	if (right <= n) SummaDaon(tree, n, right, sum);
	
}

int main () {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		int N;
		scanf("%d", &N);
		
		int tree[N + 1];
		for (int i = 1; i <= N; i++) {
			scanf("%d", &tree[i]);
		}
		
		printf("Case #%d:\n", t);
		SummaDaon(tree, N, 1, 0);
	} return 0;
}
