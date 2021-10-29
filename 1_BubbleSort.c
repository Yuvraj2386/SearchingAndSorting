#include<stdio.h>
#include<stdlib.h>


void BubbleSort(int A[], int n){
    for(int i=0 ; i<n-1 ; i++){
        int flag=0;
        for(int j=0 ; j<n-1-i ; j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            flag=1;
            }
        }
        if(flag==0){
            printf("it is already sorted\n");
            break;
        }
    }
    for(int i=0 ;i<n ;i++){
        printf("%d ",A[i]);
    }
}



int main(){
printf("enter the value of n\n");
int n;
scanf("%d",&n);
int A[n];
printf("enter the elements that you want to sort\n");

for(int i=0 ; i<n ; i++){
    scanf("%d",&A[i]);
}
BubbleSort(A,n);
    return 0;
}