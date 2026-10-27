#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

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

    int sum = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] <= x) continue;
        if (arr[i] < 2) continue;

        int ok = 1;
        int limit = (int)sqrt((double)arr[i]);
        int j = 0;
        for (j = 2; j <= limit; j++) {
            if (arr[i] % j == 0) {
                ok = 0;
                break;
            }
        }

        if (ok == 1) {
            sum += arr[i];
        }
    }

    printf("%d\n", sum);

    return 0;
}
