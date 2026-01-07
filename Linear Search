#include<stdio.h>
int main(){
	int i,n,key,a[100],flag=0,pos;

  printf("Enter the size of the array");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

  printf("Enter the element to be search");
	scanf("%d",&key);

	for(i=0;i<n;i++){
		if(a[i]==key){
			pos=i;
			flag=1;
			break;
		}
	}

	if(flag==1){
		printf("found at position %d\n",pos);
	}else{
		printf("%d not found\n",key);
	}
}
