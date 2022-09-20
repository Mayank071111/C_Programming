//WAP to calculate count of even and odd elements take array size and array elements from user
#include<stdio.h>
void main(){
	int size,count=0,count1=0;
	printf("Enter size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array:");
	for(int i=0;i<size;i++){
		scanf("%d",&(arr[i]));
	}
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			count =count+1;
		}else{
			count1=count1+1;
		}
	}
	printf("Even element count is %d\n",count);
	printf("Odd element count is %d\n",count1);


}
