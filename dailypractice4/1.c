/*
3	4	5
6	8	10
9	12	15
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
			num=num+i;
		}
		printf("\n");
	}
}
