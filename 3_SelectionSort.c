#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int A[], int n){
    for(int i=0 ; i<n-1 ; i++){
        int k;
        for(int j=k=i ; j<n ;j++){
           if(A[j]<A[k]){
               k=j;
           }
        }
        int temp=A[i];
        A[i]=A[k];
        A[k]=temp;
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ",A[i]);
    }
}


int main(){
int n;
printf("enter the number of elements\n");
scanf("%d",&n);
int A[n];
for(int i=0 ; i<n ; i++){
    scanf("%d",&A[i]);
}
SelectionSort(A,n);
    return 0;
}