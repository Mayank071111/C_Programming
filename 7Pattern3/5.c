/*
1	 4	 3
16	 5 	36
7	 64 	9
*/
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	int a=1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if((i+j)%2!=0){
				printf("%d\t",a*a);
				a++;
			}else{
				printf("%d\t",a);
				a++;
			}
		}
		printf("\n");
	}
}
