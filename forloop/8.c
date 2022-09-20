//Pythogoras triplet
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	if(c*c==a*a+b*b){
		printf("Yes,Pythogoras triplet \n");
	}else{
		printf("Not, Pythogoras triplet \n");
	}
}
