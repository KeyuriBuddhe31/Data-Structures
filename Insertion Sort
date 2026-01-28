#include<stdio.h>
void main() {
	int arr[100], i, n, j, temp, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);

	for(i=0;i<n;i++){
		printf("Enter element for arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Before sorting the elements in the array are\n");
	for(i=0;i<n;i++){
		printf("Value of arr[%d] = %d\n",i,arr[i]);
	}
	
	for(i=1;i<n;i++){
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	
	
	printf("Sorted Array : \n");
	for(i=0;i<n;i++){
		printf("Value of arr[%d] = %d\n",i,arr[i]);
	}
	
}
