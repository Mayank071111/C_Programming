/*
3	7	11	
6	11	16
9	15	21
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num=rows*i;
		for(int j=1;j<=rows;j++){
			printf("%d\t",num);
			num=num+rows+i;
		}
		printf("\n");
	}
}
