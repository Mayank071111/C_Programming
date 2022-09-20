#include<stdio.h>
void main(){
	char ch='A';
	for(int i=0;i<=3;i++){
		ch='A'+i;
		for(int j=1;j<=4;j++){
			printf("%c ",ch);
			ch++;	
		}
		printf("\n");
	}
}
