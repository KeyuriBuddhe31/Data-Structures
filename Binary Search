#include <stdio.h>

int binarySearch(int a[], int n, int key) {

    int left = 0, right = n - 1;
    while (left <= right) {
    int mid = left + (right - left) / 2;
		if(a[mid] == key){
			return mid;
		}
		else if(key < a[mid]){
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}  
  }
    return -1;
}


int main() {
    int n, key;
    printf("Enter the size of array");
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be search");
    scanf("%d", &key);
  
    int position = binarySearch(a, n, x);
    if (position != -1)
        printf("Element %d found at position %d\n",key,position);
    else
        printf("Element %d not found\n",key);

    return 0;
}
