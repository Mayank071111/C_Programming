/*
4 a 3 b
4 a 3 b
4 a 3 b
4 a 3 b
*/
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int a=4;
		char ch='a';
		for(int j=1;j<=rows;j++){
			if(j%2!=0){
				printf("%d\t",a);
				a--;
			}else{
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
