#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {

	int n = 0;
	scanf("%d", &n);
	int  arr[100] ;
	int i = 0;
	int x = 0;
	for (i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 0;i < n;i++) {
		if (i == 0 || arr[i] > max) {
			x++;
			max = arr[i];
		}
	}
	printf("%d\n", x);
	

		


	return 0;
}
