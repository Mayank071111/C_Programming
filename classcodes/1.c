//Constant 
#include<stdio.h>
void main(){
	int x=10;
	const int *ptr=&x;
	printf("%d\n",x);
	*ptr=30; //error assignment of read only location
	printf("%d\n",x);
}
