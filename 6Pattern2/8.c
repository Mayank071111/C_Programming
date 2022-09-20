#include<stdio.h>
void main(){
	int a=18;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",a);
			a=a-2;
		}
		printf("\n");
	}
}
