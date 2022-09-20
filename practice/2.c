#include<stdio.h>
void main(){
	int arr[2][3];
	printf("Enter elements:\n");
	for(int rows=0;rows<2;rows++){
		for(int col=0;col<3;col++){
			scanf("%d",&(arr[rows][col]));
		}
	}
	for(int rows=0;rows<2;rows++){
		for(int col=0;col<3;col++){
			printf("%d ",arr[rows][col]);
		}
		printf("\n");
	}
	for(int i=0;i<6;i++){
		printf("%d\n",arr[i]);
		printf("%p\n",arr[i]);
	}
}
