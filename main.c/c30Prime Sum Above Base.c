#include<stdio.h>
#include<math.h>
# define debug 1
int main() {
	int n = 0;
	scanf("%d", &n);
	int arr[20];
	int i = 0;
	for (i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	int x = 0;
	int w = 0;
	scanf("%d", &x);
	int sum = 0;
	for (i = 0;i < n;i++) {
		int ok = 1;
		int limit = sqrt(arr[i]);
		if (arr[i] < x)continue;
		if (arr[i] == 2) {
			sum += arr[i];
#if debug
			printf("[附加透视眼]发现基准以上的素数2\n");
#endif
			continue;
		}
		if (arr[i] < 2) continue;
		for (w = 2;w <= limit;w++) {
			if (arr[i] % w == 0) {
				ok = 0;break;
			}
		}if (ok == 1) {
			sum += arr[i];
#if debug
			printf("[附加透视眼]发现基准以上的素数%d\n", arr[i]);
#endif

		}
	}printf("%d\n", sum);


	return 0;
}