//WAP to print the divisiors and count of divisiors of the entered number
//input:15
//output: the divisiors are 1 3 5 15
//	  count of divisiors is 4
//	  addition of divisiors 24
#include<stdio.h>
void main(){
	
	int num;
	int count=0;
	int add=0;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("number of divisiors are: ");
	for(int i=1;i<=num;i++){
		
		if(num%i==0){
			add=add+i;
			count=count+1;
		printf("%d ",i);
		}
	}
	printf("\nCount of divisiors is: %d\n",count);
	printf("Addition of divisiors is: %d\n",add);

}
