// WAP to take angles of a triangle from user and print whether traiangle is valid or not
#include<stdio.h>
void main(){

	int angle1,angle2,angle3;
	printf("Enter angle1:");
	scanf("%d",&angle1);
	printf("Enter angle2:");
	scanf("%d",&angle2);
	printf("Enter angle3:");
	scanf("%d",&angle3);
	if(angle1+angle2+angle3==180){
		printf("Yes,Triangle is valid \n");
	}else{
		printf("No, Triangle is not valid \n");
	}
}
