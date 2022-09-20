/*
#include<stdio.h>
void main(){

	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("you entered the UPPERCASE letter \n");
	}else{
		printf("you entered the LOWERCASE letter \n");
	}
}


#include<stdio.h>
void main(){

	int num;
	printf("Enter a num:");
	scanf("%d",&num);
	if(num>0){
		printf("%d is positive number \n",num);
	}else if(num<0){
		printf("%d is negative number \n",num);
	}else{
		printf("%d is zero number \n",num);
	}
}

#include<stdio.h>
void main(){
	char ch;
	printf("Enter any chraxter:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o'  || ch=='u'){
		printf("vowel");       
	}else{
		printf("consonant");
	}

}*/


#include <stdio.h>
void main(){
	int x=9;
	int ans3;
	ans3= x++ + x++ + x++ + x++;
	printf("%d \n",ans3);
	printf("%d \n",x);


}
