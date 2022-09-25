//WAP to take array and size of array elements of 2d array from user and print addn of all elements of 2d array
#include<stdio.h>
void main(){
	int size;
	int row,col;
	printf("Enter row:");
	scanf("%d",&row);
	printf("Enter col:");
	scanf("%d",&col);
	int arr[row][col];
	printf("Enter array elements:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&(arr[i][j]));
		}
	}
	int sum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			sum=sum+arr[i][j];
		}
	}
	printf("Sum of array elements is %d\n",sum);
}
