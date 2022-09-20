/*
			1
		1	2	
	1	2	3
1	2	3	4
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int a=1;
		for(int sp=rows-1;sp>=i;sp--){
			printf("\t");
		}
		for(int j=1;j<=i;j++){
			printf("%d\t",a);
			a++;
		}
		printf("\n");
	}
}
