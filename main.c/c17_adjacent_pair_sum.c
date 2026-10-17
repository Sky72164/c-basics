#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {

	int n = 0;
	scanf("%d", &n);
	int arr[105];
	int i = 0;

	int x = 0;
	for (i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	int p = 0;
	scanf("%d", &p);
	for (i = 0;i < n - 1;i++) {
		if (arr[i] + arr[i + 1] == p) {
			x++;
		}
	}

	printf("%d\n", x);



	return 0;
}