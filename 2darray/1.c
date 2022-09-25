#include<stdio.h>
void main(){
	int arr[][3]; //errror initializer list nhi di isliye
	int arr[3][3];
	int arr[][]; //error array size missing
	int arr[3][]; //compulsory rehta column subscript m value dena
}
