//1wap to check leap year or not
// #include<stdio.h>
// void main(){

//     int year;
//     printf("Enter a year:");
//     scanf("%d",&year);
//     if(year%4==0){
//         printf("%d is leap year \n",year);
//     }else{
//         printf("%d is not leap year \n",year);
//     }
// }

//2 wap to print maximum amoung three numbers
// #include<stdio.h>
// void main(){

//     int a,b,c;
//     printf("Enter num1:");
//     scanf("%d",&a);
//     printf("Enter num2:");
//     scanf("%d",&b);
//     printf("Enter num3:");
//     scanf("%d",&c);
//     if(a>b && a>c){
//         printf("%d is greater than %d and %d \n",a,b,c);
//     }else if(b>a && b>c){
//         printf("%d is greater than %d and %d \n",b,a,c);
//     }else{
//         printf("%d is greater than %d and %d \n",c,a,b);
//     }
// }

//3 Wap to print minimum amoung three numbers
// #include<stdio.h>
// void main(){

//     int a,b,c;
//     printf("Enter num1:");
//     scanf("%d",&a);
//     printf("Enter num2:");
//     scanf("%d",&b);
//     printf("Enter num3:");
//     scanf("%d",&c);
//     if(a<b && a<c){
//         printf("%d is smaller than %d and %d \n",a,b,c);
//     }
//     else if(b<a && b<c){
//         printf("%d is smaller than %d and %d \n",b,a,c);
//     }
//     else{
//         printf("%d is smaller than %d and %d \n",c,a,b);
//     }
// }

//4 wap according to month number print the no. of days using switch case
// #include<stdio.h>
// void main(){

//     int monthnumber;
//     printf("Enter a month number:");
//     scanf("%d",&monthnumber);
//     switch(monthnumber){

//         case 1:
//                 printf("31 days \n");
//                 break;
//         case 2:
//                 printf("28 days \n");
//                 break;
//         case 3:
//                 printf("31 days \n");
//                 break;
//         case 4:
//                 printf("30 days \n");
//                 break;
//         case 5:
//                 printf("31 days \n");
//                 break;
//         case 6:
//                 printf("30 days \n");
//                 break;
//         case 7:
//                 printf("31 days \n");
//                 break;
//         case 8:
//                 printf("31 days \n");
//                 break;
//         case 9:
//                 printf("30 days \n");
//                 break;
//         case 10:
//                 printf("31 days \n");
//                 break;
//         case 11:
//                 printf("30 days \n");
//                 break;
//         case 12:
//                 printf("31 days \n");
//                 break;
//         default:
//                 printf("Invalid input!!");
//     }
// }

//5 wap that takes a number from 1-5 and print its spelling ,if no. is greater
//than 5 than it print entered no. is greater than 5
// #include<stdio.h>
// void main(){

//     int num;
//     printf("Enter a num between 1-5:");
//     scanf("%d",&num);
//     switch(num){

//         case 1:
//             printf("One\n");
//             break;
//         case 2:
//             printf("Two\n");
//             break;
//         case 3:
//             printf("Three\n");
//             break;
//         case 4:
//             printf("Four\n");
//             break;
//         case 5:
//             printf("Five\n");
//             break;
//         default:
//             printf("%d is greater than 5",num);
//     }
// }

//6 Wap to get 10 numbers from user and find their sum and average
// #include<stdio.h>
// void main(){

//     int sum=0;
//     float avg;
//     for(int i=1;i<=10;i++){
//         int x;
//         printf("Enter num:");
//         scanf("%d",&x);
//         sum =sum+x;
//     }
//     avg=(float)sum/10;
//     printf("Total sum is:%d\n",sum);
//     printf("Average is:%f\n",avg);
// }

//7 wap to check whether the given input is pythogoras triplet or not
// #include<stdio.h>
// void main(){

//     int a,b,c;
//     printf("Enter num1:");
//     scanf("%d",&a);
//     printf("Enter num2:");
//     scanf("%d",&b);
//     printf("Enter num3:");
//     scanf("%d",&c);
//     if(a*a==b*b+c*c){
//         printf("Yes pythogoras triplet \n");
//     }else if(b*b==a*a+c*c){
//         printf("Yes pythogoras triplet \n");
//     }else if(c*c==a*a+b*b){
//         printf("Yes pythogoras triplet \n");
//     }else{
//         printf("Not pythogoras triplet \n");
//     }
// }

//8 wap to check triangle is valid or not
// #include<stdio.h>
// void main(){

//     int a,b,c;
//     printf("Enter angle1:");
//     scanf("%d",&a);
//     printf("Enter angle2:");
//     scanf("%d",&b);
//     printf("Enter angle3:");
//     scanf("%d",&c);
//     if(a+b+c==180){
//         printf("Yes triangle is valid \n");
//     }else{
//         printf("no triangle is not valid \n");
//     }
// }

//9 wap to print the count of divisiors of the entered number
// #include<stdio.h>
// void main(){

//     int num;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     printf("Divisiors of %d are:\n",num);
//     for(int i=1;i<num;i++){
//         if(num%i==0){
//             printf("%d\n",i);
//         }
//     }
// }

//10 wap that takes two charactr as input and checks if both the character
//are equal if equal print them,if not then print diff bw them.
// #include<stdio.h>
// void main(){

//     char var1;
//     char var2;
//     printf("Enter chracter1:");
//     scanf(" %c",&var1);
//     printf("Enter chracter2:");
//     scanf(" %c",&var2);
//     if(var1==var2){
//         printf("var1 is:  %c\n",var1);
//         printf("var1 is:  %c\n",var2);
//     }else{
//         printf("The difference between %c and %c is %d",var1,var2,var2-var1);
//     }
// }