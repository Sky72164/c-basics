#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int i = 0;
	int j = 0;
	int arr[20][10];
	for (i = 0;i < m;i++) {
		for (j = 0; j < n;j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int x = 0;
	for (i = 0;i < m;i++) {
		for (j = 0; j < n;j++) {
			int flag = 1;
			if (i > 0 && arr[i][j] <= arr[i - 1][j]) {
				flag = 0;
			}
			if (i < m - 1 && arr[i][j] <= arr[i + 1][j]) {
				flag = 0;
			}
			if (j < n - 1 && arr[i][j] <= arr[i][j + 1]) {
				flag = 0;
			}
			if (j > 0 && arr[i][j] <= arr[i][j - 1]) {
				flag = 0;
			}
			if (flag == 1) {
				x++;
			}
		}
	}
	printf("%d\n", x);
	return 0;
}
