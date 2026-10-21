#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	int arr[20][10];
	int i = 0, j = 0;
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int count = 0;
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			int k = 0;
			int isColMin = 1;
			int isRowMax = 1;

			for (k = 0;k < m;k++) {
				if (arr[k][j] < arr[i][j]) {
					isRowMax = 0;
					break;
				}
			}

			for (k = 0;k < n;k++) {
				if (arr[i][k] > arr[i][j]) {
					isColMin = 0;
					break;
				}
			}

			if (isRowMax == 1 && isColMin == 1) { count++; }
		}
	}
	printf("%d", count);

	return 0;
}