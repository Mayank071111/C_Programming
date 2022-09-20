//WAP to swap value of two numbers using a pointer
#include<stdio.h>
void main(){

	int x;
	int y;
	printf("Before Swapping\n");
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);

	int temp;
	temp=x;
	int *ptr1=&x;
	*ptr1=y;
	int *ptr2=&y;
	*ptr2=temp;
	printf("After Swapping\n");
	printf("x = %d\n",x);
	printf("y = %d\n",y);
}
