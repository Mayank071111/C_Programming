//1 wap to find the sum of numbers that are not divisible by 3
// #include<stdio.h>
// void main(){

//     int num;
//     int sum=0;
//     printf("Enter any number:");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         if(i%3!=0){
//             sum=sum+i;
//         }
//     }
//     printf("Sum of numbers not divisible by 3 is %d\n",sum);
// }

//2 wap to print addition of 1-10 ith 10-1
// #include<stdio.h>
// void main(){

//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     for(int i=1;i<=10;i++){
//         printf("%d + %d = %d\n",i,num,i+num);
//         num--;
//     }
// }

//3 wap to print the divisiors and count of divsiors and addition of divisiors of the entered number
// #include<stdio.h>
// void main(){

//     int num;
//     int sum=0,count=0;
//     printf("Enter any number:");
//     scanf("%d",&num);
//     printf("The divisor are:");
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             printf("%d ",i);
//             count=count+1;
//             sum=sum+i;
//         }
//     }
//     printf("\nThe count of divisiors are:%d\n",count);
//     printf("The addition of divisiors are:%d\n",sum);
// }

#include<stdio.h>
void main(){

    int rows;
    printf("Enter rows:");
    scanf("%d",&rows);
   
    for(int i=1;i<=rows;i++){
        int a=1+i-1;
        int b=5+i-2;
        for(int j=1;j<=rows;j++){
            if(i%2!=0){
                printf("%d\t",a);
                a++;
            }else{
                printf("%d\t",b);
                b--;
            }
        }
        printf("\n");
    }
}