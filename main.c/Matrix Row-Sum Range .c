#include<stdio.h>
#define debug 1;

int m = 0, n = 0;
scanf("%d %d", &m, &n);
int arr[20][10];
int i = 0, w = 0;
for (i = 0;i < m;i++) {
	for (w = 0;w < n;w++) {
		scanf("%d", &arr[i][w]);
	}
}
int j = 0;

for (w = 0;w < n;w++) {
	int sum = 0;
	for (j = 0;j < m;j++) {
		sum += arr[j][w]

	}	int max = -1, min = 999999;
	if (sum > max) {
		max = sum;
		if (sum < min) {
			min = sum;
		}
		int y = 0;
		y = max - min;
#if debug
		printf("[附加透视眼] 第 %d 行之和为: %d\n", i + 1, row_sum);
#endif
	}

#if debug
	printf("------ [数据审计报告] ------\n");
	printf("最大行和: %d\n", max_sum);
	printf("最小行和: %d\n", min_sum);
	printf("两者之差: %d\n", max_sum - min_sum);
	printf("----------------------------\n");
#endif



	return 0;
}
