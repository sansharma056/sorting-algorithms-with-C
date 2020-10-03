#include<stdio.h>

void swap(int *x, int *y) {
	int t=*x;
	*x=*y;
	*y=t;
}

void heapify(int a[], int n, int i) {
	int largest = i;
	int left = 2*i+1;
	int right = 2*i+2;
	
	if(left < n && a[left] > a[largest]) {
		largest = left;
	}

	if(right < n && a[right] > a[largest]) {
		largest = right;
	}
	
	if(largest != i) {
		swap(&a[largest], &a[i]);
		heapify(a, n, largest);
	}

}

void heapSort(int a[], int n) {
	int i;

	for(i=n/2-1; i>=0; i--) {
		heapify(a, n, i);
	}
	
	for(i=n-1; i>0; i--) {
		swap(&a[0], &a[i]);
		heapify(a, i, 0);
	}
}

int main() {
	int a[] = {7, 3, 5, 1, 8, 4};
	int n = sizeof(a)/sizeof(a[0]);
	int i;

	heapSort(a, n);

	for(i=0; i<n; i++) {
		printf("%d\t", a[i]);
	}

	printf("\n");

	return 0;
}
