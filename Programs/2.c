/*
1	
1	2
2	3	4
4	5	6	7
7	8	9	10
*/
#include<stdio.h>
void main(){
	int rows;
	int temp=1;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num=temp;
		for(int j=1;j<=i;j++){
			printf("%d\t",num);
			num=num+1;
		}
		temp=num-1;
		printf("\n");
	}

}
