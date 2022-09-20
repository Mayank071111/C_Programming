#include<stdio.h>
void main(){
	int a=1;
	for(int i=0;i<=3;i++){
		for(int j=1;j<=4;j++){
			if(i==1 || i==3){
				printf("%d ",a*a);
				a++;
			}else{
				printf("%d ",a);
				a++;
			}
		}
		printf("\n");
	}
}
