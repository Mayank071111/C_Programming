/*
2	3	5
7	11	13
17	19	23
*/
#include<stdio.h>
void main(){
	int rows,x=2;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;){
			int count=0;
			for(int k=1;k<=x;k++){
				if(x%k==0){
					count=count+1;
				}
			}
			if(count==2){
				printf("%d\t",x);
				j++;
			}
			x++;
			
		}
		printf("\n");
	}
}
