#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int m = 0;
	int n = 0;
	int arr[20][10];
	int i = 0;
	int j = 0;
	int sum = 0;
	scanf("%d%d", &m, &n);
	for (i = 0;i < m;i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0;i < m;i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
				sum += arr[i][j];
		}
	}
	printf("%d\n", sum);
	return 0;
}
