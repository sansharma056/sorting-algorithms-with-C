#include<stdio.h>

void swap(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;
}

void selectionSort(int a[], int n) {
	int i, j, minIdx;

	for(i=0; i<n-1; i++) {
		minIdx = i;

		for(j=i+1; j<n; j++) {
			if(a[j] <= a[minIdx]) {
				minIdx = j;
			}
		}

		swap(&a[i], &a[minIdx]);
	}
}

int main() {
	int a[] = {7, 3, 5, 1, 8, 4};
	int n = sizeof(a)/sizeof(a[0]);
	int i;

	selectionSort(a, n);

	for(i=0; i<n; i++) {
		printf("%d\t", a[i]);
	}
	
	printf("\n");

	return 0;
}
