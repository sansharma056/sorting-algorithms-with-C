#include<stdio.h>

void swap(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;
}

void bubbleSort(int a[], int n) {
	int i, j, flag=1;

	for(i=0; i<n-1; i++) {
		for(j=0; j<n-i-1; j++) {
			if(a[j+1] < a[j]) {
				swap(&a[j], &a[j+1]);
				flag = 0;
			}
		}

		if(flag) {
			break;
		}
	}
}

int main() {
	int a[] = {7, 3, 5, 1, 8, 4};	
	int n = sizeof(a)/sizeof(a[0]);
	int i;

	bubbleSort(a, n);

	for(i=0; i<n; i++) {
		printf("%d\t", a[i]);
	}
	
	printf("\n");

	return 0;
}
