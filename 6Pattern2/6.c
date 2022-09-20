#include<stdio.h>
void main(){
	for(int i=0;i<=3;i++){
		for(int j=1;j<=4;j++){
			if(i==0 || i==2){
				printf("= ");
			}
			else{
				printf("$ ");
			}
		}
		printf("\n");
	}
}
