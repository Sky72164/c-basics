#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int arr[20];
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x = 0;
    scanf("%d", &x);

    int count = 0;

    for (i = 0; i < n; i++) {
        int sum = 0;

        if (arr[i] > x) {
            for (int num = 1; num < arr[i]; num++) {
                if (arr[i] % num == 0) {
                    sum += num;
                }
            }

            if (sum == arr[i]) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
