#include<stdio.h>
int x=10;
int y;

void fun(){
	int a=20;
	printf("%d\n",a);
}
void gun(){
	int b=30;
	fun();
	printf("%d\n",b);
}
void main(){
	int z=40;
	printf("Start main\n");
	gun();
	printf("%d\n",z);
	printf("End main\n");
}
