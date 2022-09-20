/*
*	 _	 _	 _
_	 *	 _	 _
_	 _ 	 *	 _
_	 _	 _ 	 *
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(i==j){
				printf("*\t");	
			}else{
				printf("_\t");
			}
		}
		printf("\n");
	}
}
