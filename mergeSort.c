#include<stdio.h>

void merge(int a[], int start, int mid, int end) {
	int i, j, k;

	int n1 = mid - start + 1;
	int n2 = end - mid;

	int L[n1];
	int R[n2];

	for(i=0; i<n1; i++) {
		L[i] = a[start + i];
	}

	for(i=0; i<n2; i++) {
 		R[i] = a[mid + i + 1];
	}
		
	i=0;		
	j=0;
	k=start;
	
	while(i<n1 && j<n2) {
		if(L[i] <= R[j]) {
		 	a[k++] = L[i++];
		} else {
			a[k++] = R[j++];
		}
	}

	while(i<n1) {
		a[k++] = L[i++];
	}

	while(j<n2) {
		a[k++] = R[j++];
	}

}

void mergeSort(int a[], int start, int end) {
	if(start<end) {
		int mid = (start+end)/2;
		mergeSort(a, start, mid);
		mergeSort(a, mid+1, end);
		merge(a, start, mid, end);
	}
}


int main() {
	int a[] = {7, 3, 5, 1, 8, 4};	
	int n = sizeof(a)/sizeof(a[0]);
	int i;

	mergeSort(a, 0, n-1);

	for(i=0; i<n; i++) {
		printf("%d\t", a[i]);
	}

	printf("\n");

	return 0;
}
