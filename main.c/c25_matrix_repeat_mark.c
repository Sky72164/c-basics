#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	int arr[20][10];
	int i = 0, j = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			int k = 0;
			int repeat = 0;

			for (k = 0; k < i; k++) {
				if (arr[k][j] == arr[i][j]) {
					repeat = 1;
					break;
				}
			}
			for (k = 0; k < j; k++) {
				if (arr[i][k] == arr[i][j]) {
					repeat = 1;
					break;
				}
			}

			printf("%d ", repeat);
		}
		printf("\n");
	}

	return 0;
}