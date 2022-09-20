#include<stdio.h>
void main(){

	for(int i=1;i<=4;i++){
		char ch='D';
		for(int j=4;j>=1;j--){
			printf("%c%d ",ch,j);
			ch--;	
		}
		printf("\n");
	}
}
