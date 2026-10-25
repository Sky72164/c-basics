#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main() {


	int arr[] = { 9, 9, 7, 7, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int w = 1;
	int r = 1;
	
	for (r = 1;r < size ;r++) {
		
			if (arr[r] != arr[w - 1]) {
				arr[w] = arr[r];
				w++;
			}
		}size=w;

	for (int i = 0; i < w; i++) {
		printf("%d", arr[i]);
		printf("\n");

	}


	return 0;
}
