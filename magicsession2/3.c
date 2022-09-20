//WAP to add two different arrays of the same size take array size and array elements from user
#include<stdio.h>
void main(){
	int size;
	printf("Enter array size:");
	scanf("%d",&size);
	int arr1[size];
	printf("Enter arr1 elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&(arr1[i]));
	}
	int arr2[size];
	printf("Enter arr2 elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&(arr2[i]));
	}
	for(int i=0;i<size;i++){
		arr1[i]=arr1[i]+arr2[i];
		printf("%d ",arr1[i]);
	}
}
