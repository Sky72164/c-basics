#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int arr[20][10];
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			int ok = 1;
			for (k = 0; k < m; k++) {
				if (arr[i][j] > arr[k][j]) {
					ok = 0;
				}
			}
			for (k = 0; k < n; k++) {
				if (arr[i][j] < arr[i][k]) {
					ok = 0;
				}
			}
			if (ok) {
				printf("%d %d\n", i, j);
				return 0;
			}
		}
	}
	printf("-1 -1\n");
	return 0;
}
