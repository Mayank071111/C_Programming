/*
 	        1
 	    1	   2
	1	1	2
   1	   2	   3	   4
1	2	3	4	5
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num=1;
		for(int sp=rows-1;sp>=i;sp--){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			printf("%d   ",num);
			num=num+1;
		}
		printf("\n");
	}
}
