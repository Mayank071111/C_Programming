//Wap to print all even numbers in reverse order and odd numbers in the standard way.
//input- start-2
//	end-9
//output-
//8 6 4 2
//3 5 7 9

#include<stdio.h>
void main(){
	
	int start;
	int end;
	printf("start -");
	scanf("%d",&start);
	printf("end -");
	scanf("%d",&end);
	for(int i=end;i>=start;i--){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	printf("\n");
	for(int i=start;i<=end;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
}

