/*
1	
3	5	
7	9	11
13 	15	17	19
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	int num=1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			printf("%d\t",num);
			num=num=num+2;
		}
		printf("\n");
	}
}
