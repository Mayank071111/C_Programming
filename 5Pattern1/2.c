#include<stdio.h>
void main(){
	int a=1;
	char ch='a';
	for(int i=0;i<=3;i++){
		ch='a';
		for(int j=1;j<=3;j++){
			if(i%2==0){
				printf("%d ",j);
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}	
}
