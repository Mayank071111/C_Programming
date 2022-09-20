#include<stdio.h>
void main(){
	int a=4;
	for(int i=0;i<=3;i++){
		a=4+i;
		for(int j=1;j<=4;j++){
			printf("%d ",a);
			a--;
		}
		printf("\n");
	}
}
