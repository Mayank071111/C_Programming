//WAp to find the given element from array take array size and array elements from user
#include<stdio.h>
void main(){
	int size;
	printf("Enter array size:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array:");
	for(int i=0;i<size;i++){
		scanf("%d",&(arr[i]));
	}
	int search,i,flag=0;
	printf("Enter element you want to search:");
	scanf("%d",&search);
	for(i=0;i<size;i++){
		if(search==arr[i]){
			flag=1;	
			break;
		}
	}
	if(flag==1){
		printf("%d is present\n",arr[i]);
	}
}
