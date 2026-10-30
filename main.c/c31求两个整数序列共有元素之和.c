#include<stdio.h>
#define debug 1
int main() {
	int n = 0, m = 0;
	int arr[20], art[20];
	int i = 0, j = 0;
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (j = 0;j < m;j++) {
		scanf("%d", &art[j]);
	}
	int sum = 0;
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			if (
				art[j] == arr[i]) {
#if debug
				printf("标记一处相同数为%d\n", arr[i]);
# endif
				sum += arr[i];
				art[j] = 99999;
				break;
			}
		}


	}printf("%d\n", sum);


	return 0;
}