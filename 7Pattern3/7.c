/*
1	4	27
4	27	16
27	16	125
*/
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int a=1+i-1;
		for(int j=1;j<=rows;j++){
			if((i+j)%2!=0){
				printf("%d\t",a*a);
				a++;
			}else{
				printf("%d\t",a*a*a);
				a++;
			}
		}
		printf("\n");
	}
}
