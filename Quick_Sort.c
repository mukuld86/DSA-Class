// You are using GCC
#include<stdio.h>
int partition(int a[], int start, int end){
    int pivot=a[end];   // pivot element
    int i=start-1;
    for(int j=start; j<=end; j++){
        // if current element is smaller than the pivot
        if(a[j]<pivot){
            i++;            // increment index of smaller element
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    int t=a[i+1];
    a[i+1]=a[end];
    a[end]=t;
    return i+1;
}
void quick(int a[], int start, int end){
    if(start<end){
        int p = partition(a, start, end);
        quick(a, start, p-1);
        quick(a, p+1, end);
    }
}
void printArr(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[]={24, 9, 29, 14, 19, 27 };
    int n=sizeof(a)/sizeof(a[0]);
    printf("Before sorting, array elements are: ");
    printArr(a,n);
    quick(a,0,n-1);
    printf("After sorting, array elements are: ");
    printArr(a,n);
    
    return 0;
}