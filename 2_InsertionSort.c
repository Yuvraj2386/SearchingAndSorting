#include<stdio.h>
#include<stdlib.h>

void insertionSort(int A[], int n){
    for(int i=1; i<n ;i++){
        int x=A[i];
        int j=i-1;
        while(A[j]>x && j>-1){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }

    for(int i=0 ; i< n; i++){
        printf("%d ",A[i]);
    }
}

int main(){
int n;
printf("enter the number of elements\n");
scanf("%d",&n);
int A[n];
printf("enter all the elements for insertion sort\n");
for(int i=0 ; i<n ; i++){
    scanf("%d",&A[i]);
}


insertionSort(A,n);
    return 0;
}