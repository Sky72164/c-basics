#include<stdio.h>

int main() {
    int n = 0;
    int m = 0;
    int arr[20][10];
    scanf("%d %d", &m, &n);
    int i = 0, w = 0;
    for (i = 0;i < m;i++) {
        for (w = 0;w < n;w++)
        {
            scanf("%d", &arr[i][w]);
        }
    }
    int max = 0;

    for (w = 0;w < n;w++) {
        int sum = 0;
        for (i = 0;i < m;i++) {
            sum += arr[i][w];

        }	 if (sum > max) {
            max = sum;
        }
    }

    printf("%d\n", max);
    return 0;
}