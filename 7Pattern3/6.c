/*
 
=	=	=	=	=	=
$	$	$	$	$	$
@	@	@	@	@	@
=	=	=	=	=	=
$	$	$	$	$	$	
@	@	@	@	@	@

*/
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(i==1||i==4){
				printf("=\t");
			}else if(i==2 || i==5){
				printf("$\t");
			}else if(i==3 || i==6){
				printf("@\t");
			}
		}
		printf("\n");
	}
}

