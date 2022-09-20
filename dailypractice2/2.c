/*
18	16	14
12	10	8
6	4	2
*/
#include<stdio.h>
void main(){
	int rows,num=18;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d\t",num);
			num=num-2;
		}
		printf("\n");
	}
}
