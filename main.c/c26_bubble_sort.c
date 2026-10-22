#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int arr[105];
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int k = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n - 1; i++) {
		int ok = 0;
		for (k = 0; k < n - 1 - i; k++) {
			if (arr[k] < arr[k + 1]) {
				int t = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = t;
				ok = 1;
			}
		}
		if (!ok) {
			break;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
