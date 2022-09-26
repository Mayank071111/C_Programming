/*
								1
						3	2	1
				5	4	3	2	1
		7	6	5	4	3	2	1
  9	8	7	6	5	4	3	2	1
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	int num=1;
	for(int i=1;i<=rows;i++){
		int x=num;
		for(int sp=rows*2;sp>(2*i);sp--){
			printf("\t");
		}
		for(int j=1;j<=(2*i)-1;j++){
			printf("%d\t",x);
			x=x-1;
		}
		num=num+2;
		printf("\n");
	}
}
