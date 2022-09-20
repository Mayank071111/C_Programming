//WAp to print array elements in reverse order take array size and array elements from user
#include<stdio.h>
void main(){
	int size;
	printf("Enter array size:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&(arr[i]));
	}
	printf("Array elements in reverse order are:\n");
	for(int i=size;i>0;i--){
		printf("%d\n",arr[i-1]);
	}

}
