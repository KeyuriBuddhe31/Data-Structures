#include<stdio.h>
void main() {
	int arr[100], i, n, j, large, index;
	printf("Enter value of n : ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("Enter element for a[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Before sorting the elements in the array are\n");
	
	for(i=0;i<n;i++){
		printf("Value of arr[%d] = %d\n",i,arr[i]);
	}


	for(i=n-1;i>0;i--){
		large=arr[0];
		index=0;
		for(j=0;j<=i;j++){
			if(arr[j]>large){
				large=arr[j];
				index=j;
			}
		}
		int temp=arr[index];
		arr[index]=arr[i];
		arr[i]=temp;
	}
	
	
	printf("After sorting the elements in the array are\n");
	
	for(i=0;i<n;i++){
		printf("Value of arr[%d] = %d\n",i,arr[i]);
	}
	
}
