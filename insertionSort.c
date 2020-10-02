#include<stdio.h>

void insertionSort(int a[], int n) {
	int i,j,key;	

	for(i=1; i<n; i++) {
		key = a[i];
		j = i-1;

		while(j>=0 && a[j] > key) {
			a[j+1] = a[j];	
			j--;
		}
		
		a[j+1] = key;
	}
}

int main() {
	int a[] = {7, 3, 5, 1, 8, 4};
	int n = sizeof(a)/sizeof(a[0]);
	int i;

	insertionSort(a, n);

	for(i=0; i<n; i++) {
		printf("%d\t", a[i]);
	}
	
	printf("\n");

	 return 0;
}
