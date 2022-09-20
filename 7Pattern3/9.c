/*
0	1	1	2
3	5	8	13
21	34	55	89
144	233	377	610
*/
#include<stdio.h>
void main(){
	
	int a=0;int b=1;int sum=0;
	int row;
	printf("Enter row:");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d\t",sum);
			a=b;
			b=sum;
			sum=a+b;
		}
		printf("\n");
	}
}
