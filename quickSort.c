#include<stdio.h>

void swap(int *x, int *y) {
	int t=*x;
	*x = *y;
	*y = t;
}

int partition(int a[], int start, int end) {
	int i, pivot, pIdx;

	pivot = a[end];
	pIdx = start - 1;

	for(i=start; i<end-1; i++) {
		if(a[i] < pivot) {
			swap(&a[++pIdx], &a[i]);
		}
	}
	
	swap(&a[pIdx+1], &a[end]);
	
	return (pIdx+1);
}

void quickSort(int a[], int start, int end) {
	if(start<end) {
		int pIdx = partition(a, start, end);
		quickSort(a, start, pIdx-1);
		quickSort(a, pIdx+1, end);
	}
}

int main() {
	int a[] = {7, 3, 5, 1, 8, 4};
	int n = sizeof(a)/sizeof(a[0]);
	int i;

	quickSort(a, 0, n-1);
	
	for(i=0; i<n; i++) {
		printf("%d\t", a[i]);
	}
	
	printf("\n");

	return 0;
}
