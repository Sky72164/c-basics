#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);

	int arr[20][10];
	int i = 0;
	int j = 0;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int sum = 0;
	for (i = 0; i < m; i++) {
		int max = arr[i][0];
		for (j = 0; j < n; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
		sum += max;
	}

	printf("%d\n", sum);
	return 0;
}