#include<stdio.h>
void main(){
	char ch1;
	char ch2;
	int k;
	for(int i=0;i<=3;i++){
		ch1='D';
		ch2='A';
		k=1;
		for(int j=4;j>=1;j--){
			if(i==0 || i==2){
				printf("%c%d ",ch1,j);
				ch1--;

			}else{
				printf("%c%d ",ch2,k);
				ch2++;
				k++;
			}
		}
		printf("\n");
	}
}
