#include<stdio.h>

int main() {

	int n = 0, j = 0;
	scanf("%d %d", &n, &j);
	int arr[20][10];
	int i = 0, w = 0;
	for (i = 0;i < n;i++) {
		for (w = 0;w < j;w++) {
			scanf("%d", &arr[i][w]);
		}
	}
	int sum = 0;
	double y = 0;
	int pass = 0;
	scanf("%d", &pass);
	for (i = 0;i < n;i++) {
		int mean = 0;
		for (w = 0;w < j;w++) {
			mean += arr[i][w];
		}	y = (double)mean / j;
		if (y > pass) {
			sum++;
		}
	}printf("%d\n", sum);

	return 0;
}