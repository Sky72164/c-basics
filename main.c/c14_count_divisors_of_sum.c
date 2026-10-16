#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {

	int n = 0;
	int arr[105];
	scanf("%d", &n);
	int sum = 0;
    int x = 0;
	int i = 0;
	for (i = 0;i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	for (i = 0;i < n; i++) {
		 int y = sum % arr[i];
		 if (y == 0) {
			 x++;
		 }
		 }
	printf("%d\n", x);
	return 0;
}