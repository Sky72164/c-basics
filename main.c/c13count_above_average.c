#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n = 0;
	scanf("%d",&n );
	int arr[100];
	int x = 0;
	double sum = 0;
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]); 
		 sum += arr[i];
		} 
	
	   double average = sum / n;
   
	   for (int i = 0;i < n;i++) {
		   if (arr[i] > average) {
			   x++;

		   }

	   }printf("%d\n", x);



	return 0;
}