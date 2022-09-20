#include<stdio.h>
void main(){

	for(int i=0;i<=3;i++){
		int a=3;
		char ch='c';
		for(int j=1;j<=3;j++){
			if(i==0 || i==2){
				printf("%d ",a);
				a--;
			}else{
				printf("%c ",ch);
				ch--;
			}
		}
		printf("\n");
	}
}
