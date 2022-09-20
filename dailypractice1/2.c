/*
17	15	13
11	9	7	
5	3	1
*/
#include<stdio.h>
void main(){
	int rows,num=17;
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
