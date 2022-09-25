/*
1	2	3	4	5
6	7	8	9	10
12	18	20	21	24
27	30	36	40	42
45	48	50	54	60
*/
#include<stdio.h>
void main(){
	int rows,rem;
	int x=1;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;){
			int sum=0;
			int temp=x;
			while(temp>0){
				rem=temp%10;
				sum=sum+rem;
				temp=temp/10;
			}
			if(x%sum==0){
				printf("%d\t",x);
				j++;
			}
			x=x+1;
		}
		printf("\n");
	
	}
}
