/*
1	4	7	10
7	10	13	16
13	16	19	22
19	22	25	28
*/
#include<stdio.h>
void main(){
	int rows;
	int num=1;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d\t",num);
			num=num+3;
		}
		num=num-6;
		printf("\n");
	}
}
