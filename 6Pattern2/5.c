#include<stdio.h>
void main(){
	char ch1;
	char ch2;
	for(int i=0;i<=3;i++){
		ch1='D'+i;
		ch2='e'+i-1;
		for(int j=1;j<=4;j++){
			if(i==0 || i==2){
				printf("%c ",ch1);
				ch1--;
			}else{
				printf("%c ",ch2);
				ch2--;
			}
		}
		printf("\n");
	}
}
