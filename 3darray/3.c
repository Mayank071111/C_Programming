//0th plane k 1st row ka addn aur 1st plane k 1st row ka element ka sum krna hai aur print krna hai 3d array m
#include<stdio.h>
void main(){
	int arr[2][3][3];
	int sum1=0,sum2=0;
	printf("Enter array elements:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				scanf("%d",&(arr[i][j][k]));
				if(i==0 && j==0){
					sum1=sum1+arr[i][j][k];
				}if(i==1 && j==0){
					sum2=sum2+arr[i][j][k];
				}
			}
		}
	}
	int add=0;
	add=sum1+sum2;
	printf("Addition is %d\n",add);
}
