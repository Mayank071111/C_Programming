#include<stdio.h>
void main(){
	int a=2;
	int b=2;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",a);
			a=b*b+1;
			b++;	
		}
		printf("\n");
	}
}
