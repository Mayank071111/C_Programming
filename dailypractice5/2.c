/*
0	1	1	2
3	5	8
13	21	
34
*/
#include<stdio.h>
void main(){
	int rows;
	int a=0,b=1,sum=0;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){

		for(int j=rows;j>=i;j--){
			printf("%d\t",sum);
			a=b;
			b=sum;
			sum=a+b;
		}
		printf("\n");
	}
}
