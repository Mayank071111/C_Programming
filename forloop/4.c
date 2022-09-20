//WAP in which according to the month number print the number of days in that month
#include<stdio.h>
void main(){

	int month;
	int days;
	printf("Enter month number:");
	scanf("%d",&month);
	if(month==1){
		printf("31 days \n");
	}else if(month==2){
		printf("28 days \n");
	}else if(month==3){
		printf("31 days \n");
	}else if(month==4){
		printf("30 days \n");
	}else if(month==5){
		printf("31 days \n");
	}else if(month==6){
		printf("30 days \n");
	}else if(month==7){
		printf("31 days \n");
	}else if(month==8){
		printf("30 days \n");
	}else if(month==9){
		printf("31 days \n");
	}else if(month==10){
		printf("30 days \n");
	}else if(month==11){
		printf("30 days \n");
	}else if(month==12){
		printf("31 days \n");
	}else{
		printf("Invalid input \n");
	}
}
