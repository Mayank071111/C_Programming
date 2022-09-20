/*
4	4	4	4
C	C	C
2	2
A
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num=rows-i+1;
		char ch='A'+rows-i;
		for(int j=rows;j>=i;j--){
			if(i%2!=0){
				printf("%d\t",num);
			}else{
				printf("%c\t",ch);
			}
		}
		printf("\n");
	}
}
