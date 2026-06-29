#include <stdio.h>

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void merge(int arr[],int low,int mid,int high){
    int i=low,h=low;
    int j=mid+1;
    int k,temp[100];
    while(h<=mid && j<=high){
        if(arr[h]<=arr[j]){
           temp[i]=arr[h];
           h++;
        }else{
            temp[i]=arr[j];
            j++;
        }
        i++;
    }
    if(h<=mid){
        for(k=h;k<=mid;k++){
            temp[i]=arr[k];
            i++;
        }
    }else{
        for(k=j;k<=high;k++){
            temp[i]=arr[k];
            i++;
        }
    }
    for(k=low;k<=high;k++){
        arr[k]=temp[k];
    }
}

void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    int arr[10]={21,45,37,15,14,35,90,46,67,30};
    display(arr,10);
    mergeSort(arr,0,10-1);
    display(arr,10);
    return 0;
}
