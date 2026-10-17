#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int arr[20];
	int i = 0;
	int count = 0;
	for (i = 0; i < n;i++) {
		scanf("%d", &arr[i]);
		
	}

	int min = arr[0];
	for (i = 0; i < n;i++) {
		if (arr[i]<min) {
			 min = arr[i];

		}
	}

	for (i = 0; i < n;i++) {
		if (arr[i] % min == 0) {
			count++;
		}
	}
	
	printf("%d\n", count);

	return 0;
}
