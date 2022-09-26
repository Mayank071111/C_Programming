/*

			1
		1	2	3
	1	2	3	4	5
1	2	3	4	5	6	7
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num=1;
		for(int sp=rows-1;sp>=i;sp--){
			printf("\t");
		}
		for(int j=1;j<=i+i-1;j++){
			printf("%d\t",num);
			num=num+1;	
		}
		printf("\n");
	}
}
