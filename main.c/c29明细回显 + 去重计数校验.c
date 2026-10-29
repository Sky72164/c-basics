#include<stdio.h> ;
#include<math.h>;


int main() {
	int n = 0;
	scanf("%d", &n);
	int arr[20];
	int i = 0;
	for (i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	int x = 0;
	int w = 1;
	int sum = 0;
	scanf("%d", &x);
	unsigned long long fact = 1;
	for (i = 0;i < n;i++) {
		if (arr[i] < x)continue;
		if (arr[i] == 0) { printf("1\n");break; }
		for (w = 1;w < arr[i];w++) {
			fact *= w;

		}	sum += fact;


	}printf("%d\n", sum);







	return 0;
}