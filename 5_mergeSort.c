#include<stdio.h>

#include<stdlib.h>


void merge(int a[],int low,int mid ,int high)
{
	int b[20]; 
	int i,j,k;
	i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		    b[k++]=a[i++];
		else
		   b[k++]=a[j++];
	}
	while (i<=mid)
		b[k++]=a[i++];
	while 
		(j<=high) b[k++]=a[j++];
		for (k=low;k<=high;k++)
	        a[k]=b[k];
}


void mergesort(int a[],int low,int high)
{
	int mid;
	if(low>=high)
	  return;
	mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
}


int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int A[n];
    printf("enter the value :\n");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&A[i]);
    }


	mergesort(A, 0, n-1);
	
	printf("\n Sorted numbers are : \n");


	int k;
	for(k=0;k<n;k++)
	    printf("%d ",A[k]);
	return 0;
}