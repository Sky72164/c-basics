#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {

	int n = 0;
	scanf("%d", &n);
	int arr[105];
	int i = 0;
	for (i = 0;i < n;i++) {
		scanf("%d", &arr[i]);

	}
	int max = arr[0];
	int min = arr[0];
	for (i = 0;i < n;i++) {
		if ( arr[i] > max) {
			max = arr[i];
		}
		 if (arr[i] < min) {
			min = arr[i];
		}
	}
	int x = max - min;
	printf("%d\n", x);

	return 0;
}
