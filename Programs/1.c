//1hello world program
// #include <stdio.h>

// void main(){
//     printf("hello world");
// }

//2Print using prototype of print function
// int printf(const char*,...);

// void main(){
//     printf("my name is mayank gujrati");
// }

//3program to print variables using printf function
// #include <stdio.h>

// void main(){
//     int age=21;
//     float salary=1000000.50;
//     double petprice=81.45678566;
//     char wing='A';

//     printf("%d\n",age);
//     printf("%f\n",salary);
//     printf("%f\n",petprice);
//     printf("%c\n",wing);
// }

//4 program to find size of the primitive datatypes
// #include <stdio.h>

// void main(){
//     int age=21;
//     float salary=90000.34;
//     double gold=10.23456789;
//     char wing='B';

//     printf("%d\n",sizeof(int));
//     printf("%d\n",sizeof(float));
//     printf("%d\n",sizeof(double));
//     printf("%d\n",sizeof(char));
// }

//5 #include <stdio.h>
// //int printf(const char*,...);

// void main(){
//     int x=10;
//     float y=20.5;
//     char ch='A';

//     printf("%d\n",x);
//     printf("%f\n",y);
//     printf("%c\n",ch);
// }

//6Changed the names of datatypes into any-names by using typedef
// #include <stdio.h>
// typedef int mc;
// typedef float bc;
// typedef char chutiye;

// void main(){
//     mc shivkumar=23;
//     bc ganya=12.89;
//     chutiye sushant='A';

//     printf("%d\n",shivkumar);
//     printf("%f\n",ganya);
//     printf("%c\n",sushant);
// }

//7functions userdefine and predefine functions
// #include<stdio.h>
// void office(){
//     printf("In office nusti coding \n");
// }

// void main(){
//     printf("Wakeup \n");
//     office();
//     printf("sleep \n");

// }

//8what does the program show error or warning answer-warning
// #include<stdio.h>
// void office(){
//     printf("In office nusti coding \n");
// }

// void main(){
//     printf("Wakeup \n");
//     office();
//     printf("sleep \n");

// }


//9 #include <stdio.h>
// void main(){

//     int a=20;
//     int b;
//     int ans;
//     ans=++a;
//     printf("%d \n",b);
//     printf("%d \n",a);
//     printf("%d \n",ans);
// }

//10local and global variable
// #include<stdio.h>
// int a=10;        //global variable
// void office(){
//     int b=30;    //local variable
//     printf("in office function \n");
// }

// void main(){
//     int c=40;    //local variable
//     printf("Start main \n");
//     office();
//     printf("End main \n");
// }

//11 calling global variable
// #include<stdio.h>
// int a=10;
// void office(){
//     int b=30;
//     printf("in office function \n");
//     printf("%d \n",a);
// }

// void main(){
//     int c=40;
//     printf("Start main \n");
//     printf("%d \n",a);
//     office();
//     printf("End main \n");
// }

//12garbage value concept program1
// #include<stdio.h>
// void main(){

//     int x=5;
//     int output;

//     printf("%d \n",x);
//     printf("%d \n",output);

//     output=x;

//     printf("%d \n",x);
//     printf("%d \n",output);
// }

//13preincrement concept ++x or x++ means x=x+1
// #include<stdio.h>
// void main(){

//     int x=5;
//     printf("%d \n",++x);
//     printf("%d \n",x);

// }

//pre increment program
// 14#include<stdio.h>
// void main(){
//     int x=5;
//     int output;

//     printf("%d \n",x);
//     printf("%d \n",output);

//     output=++x;

//     printf("%d \n",x);
//     printf("%d \n",output);
// }

//15 //post increment concept
// #include<stdio.h>
// void main(){
//     int x=5;
//     printf("%d \n",x++);
//     printf("%d \n",x);
// }

//16post increment program
// #include<stdio.h>
// void main(){
//     int x=5;
//     int ans;

//     ans=x++;

//     printf("%d \n",x);
//     printf("%d \n",ans);
// }

//17
// #include<stdio.h>
// int x=10;
// void fun(){

//     int y=20;
//     int ans;
//     ans=++x + ++y;
//     printf("%d \n",ans);
// }

// void main(){

//     printf("In main \n");
//     fun();
//     printf("%d \n",x);
//     printf("End main \n");
// }

//18
// #include<stdio.h>
// void main(){

//     int x=5;
//     int ans;
//     printf("%d \n",x);
//     ans= ++x + ++x;
//     printf("%d\n",x);
//     printf("%d \n",ans);
// }

//19
// #include <stdio.h>
// void main(){
//     int x=5;
//     int ans;

//     printf("%d \n",x);
//     ans= x++ + x++;
//     printf("%d %d \n",x,ans);
// }

//20
// #include <stdio.h>
// void main(){
//     int x=8;
//     int ans;
//     ans= x++ + x++;
//     printf("%d \n",x);
//     printf("%d \n",ans);
// }

//21
// #include <stdio.h>
// void main(){

//     int x=8;
//     int ans;
//     printf("%d \n",x);
//     ans= x++ + ++x;
//     printf("%d \n",x);
//     printf("%d \n",ans);
// }

//22
// #include<stdio.h>
// void main(){

//     int x=8;
//     int ans;
//     printf("%d \n",x);
//     ans= ++x + ++x + ++x;
//     printf("%d \n",x);
//     printf("%d \n",ans);
// }

//23
// #include<stdio.h>
// void main(){

//     int x=8;
//     int ans;
//     ans= ++x + ++x + ++x + ++x;
//     printf("%d \n",x);
//     printf("%d \n",ans);
// }

//24
// #include <stdio.h>
// void main(){

//     int x=8;
//     int ans;
//     printf("%d \n",x);
//     ans= x++ + x++ + x++;
//     printf("%d \n",x);
//     printf("%d \n",ans);
// }

//25 operators
// #include<stdio.h>
// void main(){

//     int x=5;
//     int y=7;
//     int ans;
//     ans= x||y;
//     printf("%d \n",ans);
//     ans= x&&y;
//     printf("%d \n",ans);
// }

//26
// #include<stdio.h>
// void main(){

//     int x=8;
//     int y=11;
//     int ans;

//     ans= ++x || ++y;
//     printf("%d\n",ans);
//     printf("%d\n",x);
//     printf("%d\n",y);

//     ans= x++ && ++y;
//     printf("%d\n",ans);
//     printf("%d\n",x);
//     printf("%d\n",y);

// }

//27
// #include<stdio.h>
// void main(){

//     int x=0;
//     int y=5;
//     int ans;

//     ans= x++ || ++y;
//     printf("%d \n",ans);
//     printf("%d \n",x);
//     printf("%d \n",y);

//     ans= x++ && y++;
//     printf("%d \n",ans);
//     printf("%d \n",x);
//     printf("%d \n",y);

// }

//28
// #include<stdio.h>
// void main(){

//     int x=0;
//     int y=5;
//     int ans;

//     ans=x++ || --x;
//     printf("%d \n", ans);
//     printf("%d \n", x);
//     printf("%d \n", y);

//     ans= x && --y;
//     printf("%d \n", ans);
//     printf("%d \n", x);
//     printf("%d \n", y);
// }

//29
// #include<stdio.h>
// void main(){

//     int x=1;
//     int y=5;
//     int ans;

//     ans=--x || --x;
//     printf("%d \n",ans);
//     printf("%d \n",x);
//     printf("%d \n",y);

//     ans= ++x && --y;
//     printf("%d \n",ans);
//     printf("%d \n",x);
//     printf("%d \n",y);
// }

//30
// #include <stdio.h>
// void main(){

//     int x=8;
//     int y=7;
//     printf("%d \n",x<=y);
//     printf("%d \n",x==y);
//     printf("%d \n",x>=y);
//     printf("%d \n",x!=y);
//     printf("%d \n",x<y);
//     printf("%d \n",x>y);
// }

//31
// #include<stdio.h>
// void main(){

//     int x=4;
//     int y=5;
//     int ans;
//     ans= x & y;
//     printf("%d \n",ans);
// }

//32
// #include<stdio.h>
// void main(){

//     int x=4;
//     int y=5;
//     int ans;
//     ans= ++x & ++y;
//     printf("%d \n",ans);
// }

//33
// #include<stdio.h>
// void main(){

//     int x=4;
//     int y=5;
//     int ans;
//     ans= x-- | ++y;
//     printf("%d \n",ans);
//     printf("%d \n",x);
//     printf("%d \n",y);
// }

//34
// #include<stdio.h>
// void main(){

//     int x=4;
//     int y=5;
//     int ans;

//     ans=x-- ^ ++y;
//     printf("%d \n",ans);
//     printf("%d \n",x);
//     printf("%d \n",y);
// }

//35
// #include<stdio.h>
// void main(){

//     int x=15;
//     int y=78;
//     int ans;

//     ans=x<<3;
//     printf("%d \n",ans);

//     ans=y>>2;
//     printf("%d \n",ans);

//     ans=x--<<3;
//     printf("%d \n",ans);
//     printf("%d \n",x);

//     ans=++y>>4;
//     printf("%d \n",ans);
//     printf("%d \n",y);
    
// }

//36
// #include<stdio.h>
// void main(){

//     int x=10,20,30;         //identifier expected
//     printf("%d \n",x);

//     int y={10,20,30};       //scalar initializer warning
//     printf("%d \n",y);      //10

//     int z=(10,20,30);       
//     printf("%d \n",z);      //30
// }

//37 printing address 
// #include<stdio.h>
// void main(){

//     int x=5;
//     int y=6;
//     printf("%p \n",&x);
//     printf("%p \n",&y);
// }


//38 identifier
// #include<stdio.h>
// void main(){

//     int numofStud =350;
//     float sal=750.90;
//     char ch ='A';
//     int __age=30;
//     float company15=75.50;
//     char 1val= 'z';
//     int c2w=1000;
//     char val$Data='w';
//     int -xyz=70;
// }

//39 program to get ascii value of every key from keyboard
// #include<stdio.h>
// void main(){
//     for(int itr=0;itr<=127;itr++)
//     {
//         printf("%C= %d \n",itr,itr);
//     }
// }

//40 Scanf Function
// #include<stdio.h>
// void main(){

//     int x;
//     printf("Enter value of x:");
//     scanf("%d ",&x);
//     printf("Value of x is: %d \n",x);
// }

//41 if else
// #include<stdio.h>
// void main(){
//     char X;
//     printf("Enter character: ");
//     scanf("%c",&X);
//     if(X>='A' && X<='Z')
//     {
//         printf("You entered a uppercase letter \n");
//     }
//     if(X>='a' && X<='z')
//     {
//         printf("You entered a lowercase letter \n");
//     }
// }

//42
// #include<stdio.h>
// void main(){
//     float income;
//     printf("Enter your income:");
//     scanf("%f",&income);

//     if(income>=500 && income<=1000)
//     {
//         printf("2 will be Tax ");
//     }
//     if(income>=1500 && income<=2000)
//     {
//         printf("20 will be Tax ");
//     }
//     if(income>=2500 && income<=3000)
//     {
//         printf("30 will be Tax ");
//     }
//     else
//     {
//         printf("40 will be Tax");
//     }
// }

//43 Program to take age as input and print ticket type.
// #include<stdio.h>
// void main(){

//     int age;
//     printf("Enter your Age:");
//     scanf("%d",&age);
//     if(age>=0 && age<=10){
//         printf("no ticket");
//     }
//     if(age>=11 && age<=17){
//         printf("Half ticket");
//     }
//     if(age>=18){
//         printf("full ticket");
//     }
// }

//44
// #include<stdio.h>
// void main(){
//     printf("Start main \n");
//     int x=0;
//     int y=20;
//     if(x){
//         printf("In first if block \n");
//     }
//     if(y){
//         printf("In second if block \n");
//     }
//     printf("End main");
// }

//45
// #include<stdio.h>
// void main(){
//     printf("Start main \n");
//     char ch1='A';
//     char ch2=48;
//     if(ch1){
//         printf("In first if block \n");
//     }
//     if(ch2){
//         printf("In second if block \n");
//     }
//     printf("End main \n");
// }

//46
// #include<stdio.h>
// void main(){
//     printf("Start main \n");
//     char ch1='A';
//     char ch2='48';   //warning aur agr ch2 print kiya toh 8 ata
//     if(ch1){
//         printf("In first if block \n");
//     }
//     if(ch2){
//         printf("In second if block \n");
//     }
//     printf("End main \n");
// }

//47
// #include<stdio.h>
// void main(){

//     int x=10;
//     char ch1='A';
//     char ch2=97;
//     char ch3=128;

//     printf("%d \n",x);
//     printf("%c \n",ch1);
//     printf("%c \n",ch2);
//     printf("%c \n",ch3);
// }

//48
// #include<stdio.h>
// void main(){

//     int x=1;
//     printf("Start code \n");
//     if(--x){
//         printf("In first if block \n");
//     }
//     if(++x || x++){
//         printf("In second if block \n");
//     }
//     printf("x=%d \n",x);
//     printf("End main \n");
// }

//49 program to print number is divisible by 2 or not
// #include<stdio.h>
// void main(){

//     int x;
//     printf("ENter value of x:");
//     scanf("%d",&x);
//     if(x%2==0){
//         printf("%d Number is divisible by 2",x);
//     }
//     if(x%2!=0){
//         printf("%d Number is not divisible by 2",x);
//     }
// }

//50
// #include<stdio.h>
// void main(){

//     int x;
//     printf("Enter value of x:");
//     scanf("%d",&x);
//     if(x%4==0 && x%5==0){
//         printf("%d is divisible by both 4 and 5",x);
//     }else{
//         printf("%d is not divisible by both 4 and 5",x);
//     }
// }

//51 program to print student is pass or fail
// #include<stdio.h>
// void main(){
//     int marks;
//     printf("Enter students marks:");
//     scanf("%d",&marks);
//     if(marks>17){
//         printf("Student is pass");
//     }else{
//         printf("Student is fail");
//     }
// }

//52 real life example of if and else
// #include<stdio.h>
// void main(){

//     char ch;
//     printf("Are you alive \n");
//     printf("Enter y or n:");
//     scanf("%c",&ch);
//     if(ch=='Y' || ch=='y'){
//         printf("nice \n");
//     }
//     else{
//         printf("user died \n");
//     }
// }

//53real life program on if else
// #include<stdio.h>
// void main(){

//     char ch1;
//     printf("Is it raining outside \n");
//     printf("Type Y or N:");
//     scanf("%c",&ch1);
//     if(ch1=='Y' || ch1=='y'){
//         printf("Yes it is raining,Take umbrella!!");
//     }
//     else{
//         printf("No, it is not raining,Clean weather!!");
//     }
// } 

//54
// #include<stdio.h>
// void main(){

//         int batterypercent;
//         printf("Enter percent of your battery in your mobile:");
//         scanf("%d",&batterypercent);
//         if(batterypercent>20){
//                 printf("No need to charge your phone");
//         }else{
//                 printf("Charge your phone immedatietly");
//         }
// }

//55if else ladder
// #include<stdio.h>
// void main(){

//         int pocketMoney;
//         printf("Enter your pocketMoney:");
//         scanf("%d",&pocketMoney);
//         if(pocketMoney>2000){
//                 printf("Happypola Hotel \n");
//         }else if(pocketMoney>=2500){
//                 printf("C02 \n");
//         }else if(pocketMoney>=1000){
//                 printf("Sarovar hotel \n");
//         }else if(pocketMoney>=500){
//                 printf("Vaishali hotel \n");
//         }else{
//                 printf("Mess ch j1 \n");
//         }
// }

//56 plan trip program using if else
// #include<stdio.h>
// void main(){

//         float money;
//         printf("Enter the money you have:");
//         scanf("%f",&money);
//         if(money>=50000){
//                 printf("dubai #habibi \n");
//         }else if(money>=40000){
//                 printf("Goa #beach pr moj \n");
//         }else if(money>=20000){
//                 printf("Delhi #delhi chle hum \n");
//         }else if(money>=10000){
//                 printf("Waterpark \n");
//         }else{
//                 printf("Plan cancel agli baar jayege pakaa \n");
//         }
// }

//57
// #include<stdio.h>
// void main(){

//         int num;
//         printf("Enter a number between 1-10: ");
//         scanf("%d",&num);
//         if(num==1){
//                 printf("One \n");
//         }else if(num==2){
//                 printf("Two \n");
//         }else if(num==3){
//                 printf("Three \n");
//         }else if(num==4){
//                 printf("Four \n");
//         }else if(num==5){
//                 printf("Five \n");
//         }else if(num==6){
//                 printf("Six \n");
//         }else if(num==7){
//                 printf("Seven \n");
//         }else if(num==8){
//                 printf("Eight \n");
//         }else if(num==9){
//                 printf("Nine \n");
//         }else if(num==10){
//                 printf("Ten \n");
//         }else{

//                 printf("Invalid input \n");
//         }
// }

//58 Swith Statement program
// #include<stdio.h>
// void main(){

//         int value;
//         printf("Enter a value between 1-5:");
//         scanf("%d",&value);
//         switch(value){
//                 case 1:
//                         printf("One \n");
//                         break;
//                 case 2:
//                         printf("Two \n");
//                         break;
//                 case 3:
//                         printf("Three \n");
//                         break;
//                 case 4:
//                         printf("Four \n");
//                         break;
//                 case 5:
//                         printf("Five \n");
//                         break;
//                 default:
//                         printf("Invalid Input!,Please Re-enter value \n");
//         }
// }

//59switch case m default likha tb
// #include<stdio.h>
// void main(){

//         int value;
//         printf("Enter a value between 1-5:");
//         scanf("%d",&value);
//         switch(value){
//                 default:
//                         printf("invalid input \n");  //break bhi likho 
//                 case 1:
//                         printf("One \n");
//                         break;
//                 case 2:
//                         printf("Two \n");
//                         break;
//                 case 3:
//                         printf("Three \n");
//                         break;
//                 case 4:
//                         printf("Four \n");
//                         break;
//                 case 5:
//                         printf("Five \n");
//                         break;
//         }
// }


//60number divisible by 3 and 5
// #include<stdio.h>
// void main(){

//         int num;
//         printf("Enter a num:");
//         scanf("%d",&num);
//         if(num%3==0 && num%5==0){
//                 printf("%d is divisible by both",num);
//         }else{
//                 printf("%d is not divisible by both 3 and 5",num);
//         }

// }


//61check no. is divisible by no. bw 1-9
// #include<stdio.h>
// void main(){

//         int num;
//         printf("Enter any num:");
//         scanf("%d",&num);
//         if(num%1==0){
//                 printf("divisible by 1 \n");
//         }if(num%2==0){
//                 printf("Divsible by 2 \n");
//         }if(num%3==0){
//                 printf("Divisible by 3 \n");
//         }if(num%4==0){
//                 printf("Divisible by 4 \n");
//         }if(num%5==0){
//                 printf("Divisible by 5 \n");
//         }if(num%6==0){
//                 printf("Divisible by 6 \n");
//         }if(num%7==0){
//                 printf("Divisible by 7 \n");
//         }if(num%8==0){
//                 printf("Divisible by 8 \n");
//         }if(num%9==0){
//                 printf("Divisible by 9 \n");
//         }

// }

//62 error case label does not reduce to int
// #include<stdio.h>
// void main(){

//         int x;
//         printf("Enter a value");
//         scanf("%d",&x);
//         switch(x){

//                 case x%1==0:
//                         printf("Divisible by 1 \n");
//                 case x%2==0:
//                         printf("Divisible by 2 \n");
//                 default:
//                         printf("Invalid input");
//                 }
// }

//63 error duplicate case value
// #include<stdio.h>
// void main(){

//         int x;
//         printf("Enter value:");
//         scanf("%d",&x);
//         switch(x){

//                 case 65:
//                         printf("Value of x is 65 \n");
//                         break;
//                 case 'A':
//                         printf("value of x is A \n");
//                 case 66:
//                         printf("value of x is 66 \n");
//                 case 'B':
//                         printf("value of x is B \n");
//                 }
// }

//64 assignment of read only error will come if u try to reassign a const variable
// #include<stdio.h>
// void main(){

//         const int x = 10; //constant variable , constant value 
//         printf("%d",x);
//         x=30;
//         printf("%d",x);
// }

//65
// #include<stdio.h>
// void main(){

//         int noOfpersons;
//         float rating;
//         char ch1;

//         printf("Enter no. of persons \n");
//         scanf("%d",&noOfpersons);

//         printf("Enter the rating of movie \n");
//         scanf("%f",&rating);

//         printf("Enter you like movie or not \n");
//         scanf("%c",&ch1);

//         printf("No. of persons are: %d \n",noOfpersons);
//         printf("Rating of movie: %f \n",rating);
//         printf("You like the movie %c \n",ch1);
// }

//66
// #include<stdio.h>
// void main(){

//         int x=7;
//         int ans;

//         ans=++x + x++ + ++x + x++ + x++;
//         printf("%d \n",ans);
//         printf("%d \n",x);
// }

//67 duplicate case value error
// #include<stdio.h>
// void main(){

//         int input;
//         int x = 2;
//         int y = 3;
//         printf("Enter input value:");
//         scanf("%d",&input);
//         switch(input){

//                 case 5:
//                         printf("5 \n");
//                         break;
//                 case 2+3:
//                         printf("2+3 \n");
//                         break;
//                 case 3+2:
//                         printf("3+2 \n");
//                         break;
//                 default:
//                         printf("In default \n");
//         }
// }

//68 duplicate case value error
// #include<stdio.h>
// void main(){

//         int x;
//         printf("Enter value of x:");
//         scanf("%d",&x);
//         switch(x){

//                 case 10%2==0:
//                         printf("in case 1");
//                         break;
//                 case 1:
//                         printf("in case 2");
//                         break;
//                 default:
//                         printf("in default");
//         }
// }

//69
// #include<stdio.h>
// void main(){

//         printf("| | | | |");
// }

//70
// #include<stdio.h>
// void main(){

//         printf("* \n");
//         printf("* \n");
//         printf("* \n");
//         printf("* \n");
//         printf("* \n");
// }

//71
// #include<stdio.h>
// void main(){

//         printf("*\n*\n*\n*\n*\n");
// }

//72 ******for loop*********
//printing star using for loop
// #include<stdio.h>
// void main(){

//         for(int i=0;i<=5;i++){

//                 printf("* \n");
//         }
// }

//73
// #include<stdio.h>
// void main(){

//         int num;
//         printf("Enter a num:");
//         scanf("%d",&num);
//         for(int i=1;i<=num;i++)
//         {
//                 printf("Mayank \n");
//         }
// }

//74 take starting point as well as ending point from user in for loop
// #include<stdio.h>
// void main(){

//         int x; //starting point of loop
//         int y; //ending point of loop
//         printf("Enter starting point:");
//         scanf("%d",&x);
//         printf("Enter ending point:");
//         scanf("%d",&y);
//         for(int i=x;i<=y;i++)
//         {
//                 printf("Get place in good company with good package \n");
//         }
// }

//75
// #include<stdio.h>
// void main(){

//     int x=9;
//     int ans;
//     ans= ++x + x++ + ++x;
//     printf("%d \n",ans);
//     printf("%d \n",x);

// }

//76
// #include<stdio.h>
// void main(){

//     int x=9;
//     int ans1;
//     ans1= ++x + ++x + ++x + ++x;
//     printf("%d\n",ans1);
//     printf("%d\n",x);

// }

//77
// #include<stdio.h>
// void main(){

//     int x=9;
//     int ans;
//     ans=x++ + x++ + ++x + x++ + ++x;
//     printf("%d\n",ans);
//     printf("%d\n",x);

// }

//78
// #include<stdio.h>
// void main(){

//     int x=9;
//     int ans;
//     ans=x++ + x++ + x++ + x++;
//     printf("%d\n",ans);
//     printf("%d\n",x);
// }

//79//take 2 input from user and print odd number bw them
// #include<stdio.h>
// void main(){

//         int x; //starting value
//         int y;  //ending value
//         printf("Enter value of x:");
//         scanf("%d",&x);
//         printf("Enter value of Y:");
//         scanf("%d",&y);
//         for(int i=x;i<=y;i++){
//                 if(i%2!=0){

//                         printf("%d\n",i);
//                 }
//         }
// }

//80 pythogoras triplet or not
// #include<stdio.h>
// void main(){

//         int a;
//         int b;
//         int c;
//         printf("Enter value of a:");
//         scanf("%d",&a);
//         printf("Enter value of b:");
//         scanf("%d",&b);
//         printf("Enter value of c:");
//         scanf("%d",&c);
//         if(c*c==a*a+b*b){
//                 printf("Yes,pythogoras triplet \n");
//         }else{
//                 printf("Not pythogoras triplet \n");
//         }
// }

//81 take 5 input from user as marks and print total marks
// #include<stdio.h>
// void main(){

//         int tmarks=0;
//         for(int i=1;i<=5;i++){
//                 int x;
//                 printf("Enter marks:");
//                 scanf("%d",&x);
//                 tmarks=tmarks+x;

//         }
//         printf("Total marks of student is %d\n:",tmarks);
// }

//82//prime number code
// #include<stdio.h>
// void main(){

//         int num;
//         int count = 0;
//         printf("Enter any number:");
//         scanf("%d",&num);
//         for(int i=1;i<=num;i++)
//         {
//                 if(num%i==0){
//                         count=count+1;
//                 }
//         }
//         if(count==2){
//                 printf("%d is a prime number \n",num);
//         }else{
//                 printf("%d is not prime number \n",num);
//         }
// }

//83
//Print sqaure of numbers from 1-10 using for loop
// #include<stdio.h>
// void main(){

//         for(int i=1;i<=10;i++){
//                 printf("%d\n",i*i);
//         }
// }

//84
//take 2 inputs from user and numbers divisible by 4 and 5 should be printed using while loop
// #include<stdio.h>
// void main(){

//         int startnum;
//         int endnum;
//         printf("Enter starting number:");
//         scanf("%d",&startnum);
//         printf("Enter ending number:");
//         scanf("%d",&endnum);
//         while(startnum<=endnum){

//                 if(startnum%4==0 && startnum%5==0){
//                         printf("%d \n",startnum);
//                 }
//                 startnum++;
//         }
// }

//85
//REverse of a number
// #include<stdio.h>
// void main(){

//         int a,rem;
//         printf("Enter any number:");
//         scanf("%d",&a);
//         while(a>0){

//                 rem=a%10;
//                 printf("%d\n",rem);
//                 a=a/10;
//         }
// }

//86
//take a number from user print remainder multiply it by 5
// #include<stdio.h>
// void main(){

//         int num;
//         int rem;
//         printf("Enter any number:");
//         scanf("%d",&num);
//         while(num>0){

//                 rem=num%10;
//                 printf("%d\n",rem*5);
//                 num=num/10;
//         }
// }

//87
//WAp to print the countdown of days to submit the asssignment
// #include<stdio.h>
// void main(){

//         int days;
//         printf("Enter number of days:");
//         scanf("%d",&days);
//         while(days>1){

//                 printf("%d days remaining\n",days);
//                 days--;
//         }if(days==1){
//                 printf("%d day remaining\n",days);
//                 days--;
//         }if(days==0){
//                 printf("0 due date\n");
//         }
// }

//88
//WAp which takes a number as input from user if number is even print that number in reverse order to 1 and if the number is odd print that number in reverse order by difference two till 1
// #include<stdio.h>
// void main(){

//         int num;
//         printf("Enter any number:");
//         scanf("%d",&num);
//         if(num%2==0){

//                 while(num>0){

//                         printf("%d ",num);
//                         num--;
//                 }
//         }else{

//                 while(num>0){

//                         printf("%d ",num);
//                         num=num-2;
//                 }
//         }
// }

//89
//print table using wile loop take input from user
// #include<stdio.h>
// void main(){

//         int num;
//         printf("Enter any number:");
//         scanf("%d",&num);
//         int i=1;
//         while(i<=10){

//                 printf("%d\n",num*i);
//                 i++;
//         }
// }

//90
//WAP TO PRINT the character is vowel or consonant from a to z. take
// lowercase and uppercase of chaeracter from user using for loop
// #include<stdio.h>
// void main(){

//         char c1;
//         char c2;
//         printf("Enter starting character:");
//         scanf(" %c",&c1);

//         printf("Enter ending character:");
//         scanf(" %c",&c2);
//         for(int i=c1;i<=c2;i++){
//                 if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
//                         printf(" %c is vowel \n",i);
//                 }
//                 else{
//                         printf(" %c is consonant\n",i);                                                                                               }
//         }
// }

//91
//WAP TO PRINT the character is vowel or consonant from a to z.
//take lowercase and uppercase of chaeracter from user using while loop
// #include<stdio.h>
// void main(){

//         char c1;
//         char c2;
//         printf("Enter starting character:");
//         scanf(" %c",&c1);

//         printf("Enter ending character:");
//         scanf(" %c",&c2);
//         while(c1<=c2){
//                 if(c1=='A' || c1=='E' || c1=='I' || c1=='O' || c1=='U'){
//                         printf(" %c is vowel \n",c1);
//                         c1++;
//                 }
//                 else{
//                         printf(" %c is consonant\n",c1);
//                         c1++;
//                 }
//         }
// }

//92//print numbers from 1-10 using for loop
// #include<stdio.h>
// void main(){

//         for(int i=1;i<=10;i++){
//                 printf("%d\n",i);
//         }
// }

//93//Print numbers from 1-10
// #include<stdio.h>
// void main(){

//         for(int i=0;i<10;i++){
//                 printf("%d\n",i+1);
//         }
// }

//94//Print numbers from 1-10
// #include<stdio.h>
// void main(){

//         for(int i=0;i<10;){
//                 printf("%d\n",++i);
//         }
// }

//95//Print numbers from 1-10
// #include<stdio.h>
// void main(){

//         for(int i=0;i<=10;i++){
//                 if(i!=0){
//                         printf("%d\n",i);
//                 }
//         }
// }

//96
// #include<stdio.h>
// void main(){

//         int i=1;
//         for(;i<=10;i++){
//                 printf("go\n");
//         }
// }

// #include<stdio.h>
// void main(){

//         int i=1;
//         for(;i<=10;){
//                 printf("go\n");
//                 i++;
//         }
// }

// errors in for loop - i undeclare error
// #include<stdio.h>
// void main(){

//         for(int i=1;i<=10;i++);{

//                 printf("%d\n",i);
//         }
// }

// #include<stdio.h>
// void main(){

//         int i;
//         for(i=1;i<=10;i++);{
//                 printf("%d\n",i); //11
//         }
// }

// #include<stdio.h>
// void main(){

//         int i;
//         for(i=1;i<=10;); //infinite loop bcoz here condn will always true

//         {
//                 printf("%d\n",i);
//         }
// }

// ************Array*********
// int iarr[5]={1,2,3,4,5}; //valid
// int iarr[]={1,2,3,4,5};  // valid
// int iarr[];              // not valid

// #include<stdio.h>
// void main(){
//         int iarr[5]={10,20,30,40,50};
//         printf("%d\n",iarr);
//         printf("%p\n",iarr);
// }

// #include<stdio.h>
// void main(){

//         int iarr[5]={10,20,30,40,50};
//         int x=10;
//         char ch='A';

//         printf("%d\n",x);
//         printf("%c\n",ch);

//         printf("%p\n",&x);
//         printf("%p\n",&ch);

//         printf("%p\n",iarr);
//         printf("%p\n",&iarr);
// }

//accesing elemnts in an array by assigning
// #include<stdio.h>
// void main(){

//         char carr[4];

//         carr[0]='A';
//         carr[1]='B';
//         carr[2]='C';
//         carr[3]='D';

//         printf("%c\n",carr[0]);
//         printf("%c\n",carr[1]);
//         printf("%c\n",carr[2]);
//         printf("%c\n",carr[3]);
// }

// #include<stdio.h>
// void main(){

//         char carr[4];

//         carr[0]='A';
//         carr[1]='B';
//         carr[2]='C';
//         carr[3]='D';

//         printf("%c\n",carr[0]);
//         printf("%c\n",carr[1]);
//         printf("%c\n",carr[2]);
//         printf("%c\n",carr[3]);
//         printf("%c\n",carr[4]);
// }

// //Take 5 integer array from user without using for loop
// #include<stdio.h>
// void main(){

//         int iarr[5];
//         printf("Enter array elements:\n");
//         scanf("%d",&iarr[0]);
//         scanf("%d",&iarr[1]);
//         scanf("%d",&iarr[2]);
//         scanf("%d",&iarr[3]);
//         scanf("%d",&iarr[4]);

//         printf("Array elements are:\n");
//         printf("%d\n",iarr[0]);
//         printf("%d\n",iarr[1]);
//         printf("%d\n",iarr[2]);
//         printf("%d\n",iarr[3]);
//         printf("%d\n",iarr[4]);
// }

//take 5input from user and print value if divisible by 2
// #include<stdio.h>
// void main(){

//         int arr[5];
//         printf("Enter array elements:");
//         for(int i=0;i<5;i++){
//                 scanf("%d",&arr[i]);
//         }
//         printf("Array elements are:");
//         for(int i=0;i<5;i++){
//                 if(arr[i]%2 == 0){
//                         printf("%d\n",arr[i]);
//                 }
//         }
// }

//Take 5 int from users and print addition of all elements
// #include<stdio.h>
// void main(){
//         int sum=0;
//         int arr[5];
//         printf("Enter array elemnts:\n");
//         for(int i=0;i<5;i++){
//                 scanf("%d",&arr[i]);
//         }
//         for(int i=0;i<5;i++){
//                 sum = sum + arr[i];
//         }
//         printf("Sum of all elements are:%d\n",sum);
// }


//take size from user and input from user and print if element is present in array or not
// #include<stdio.h>
// void main(){
//         int size;
//         printf("Enter array size:");
//         scanf("%d",&size);
//         int arr[size];
//         printf("Enter array elements:\n");
//         for(int i=0;i<size;i++){
//                 scanf("%d",&arr[i]);
//         }
//         int search;
//         printf("Enter element you want to search:");
//         scanf("%d",&search);
//         for(int i=0;i<size;i++){
//                 if(search==arr[i]){
//                         printf("Found\n");
//                 }
//                 else{
//                         printf("Not found\n");
//                 }
//         }
// }

//take size from user and input from user and print if element is present in array or not
// #include<stdio.h>
// void main(){
//         int size;
//         printf("Enter array size:");
//         scanf("%d",&size);
//         int arr[size];
//         printf("Enter array elements:\n");
//         for(int i=0;i<size;i++){
//                 scanf("%d",&arr[i]);
//         }
//         int search;
//         printf("Enter element you want to search:");
//         scanf("%d",&search);
//         int flag=0;
//         for(int i=0;i<size;i++){
//                 if(search==arr[i]){
//                         flag=1;
//                 }
//         }
//         if(flag==1){
//                 printf("Found\n");
//         }else{
//                 printf("Not found\n");
//         }
// }

//print element if divisible by 4 nd 5 in an arrry
// #include<stdio.h>
// void main(){

//         int size;
//         printf("Enter size of array:");
//         scanf("%d",&size);
//         int arr[size];
//         printf("Enter array elements:");
//         for(int i=0;i<size;i++){
//                 scanf("%d",&arr[i]);
//         }
//         int flag=0;
//         for(int i=0;i<size;i++){
//                 if(arr[i]%4==0 && arr[i]%5==0){
//                         flag=1;
//                 }
//         }
//         if(flag==1){
//                 printf("Yes found\n");
//         }else{
//                 printf("not found\n");
//         }
// }

//assigning variable to a variable
// #include<stdio.h>
// void main(){

//         int x=10;
//         int y;

//         printf("x=%d\n",x);
//         printf("y=%d\n",y);

//         y=x;

//         printf("x=%d\n",x);
//         printf("y=%d\n",y);
// }

// //Assigning array to an array 
// error- assignment to expression with array type
// #include<stdio.h>
// void main(){

//         int arr1[3];
//         arr1[0]=10;
//         arr1[2]=20;
//         arr1[3]=30;
//         for(int i=0;i<3;i++){
//                 printf("%d\n",arr1[i]);
//         }
//         int arr2[3];
//         arr1=arr2;                                                                                                                            for(int i=0;i<3;i++){
//                 printf("%d\n",arr2[i]);
//         }

// }

//Assigning array to an array
// #include<stdio.h>
// void main(){

//         int arr1[3];
//         arr1[0]=10;
//         arr1[1]=20;                                                                                                                           arr1[2]=30;                                                                                                                           for(int i=0;i<3;i++){
//                 printf("%d\n",arr1[i]);
//         }
//         int arr2[3];

//         for(int i=0;i<3;i++){
//                 arr2[i]=arr1[i];
//                 printf("%d\n",arr2[i]);
//         }

// }

//printing size of different arrays
// #include<stdio.h>
// void main(){

//         int arr1[3];
//         printf("%ld\n",sizeof(arr1));

//         int arr2[1];
//         printf("%ld\n",sizeof(arr2));

//         int arr3[0];
//         printf("%ld\n",sizeof(arr3));

// }

/******** Pointers*******/
// #include<stdio.h>
// void main(){

//         int x=10;
//         printf("%d\n",x);
//         printf("%d\n",&x);
//         printf("%p\n",&x);
// }

// #include<stdio.h>
// void main(){

//         int x=10;

//         printf("%d\n",x);
//         printf("%p\n",&x);

//         int *ptr=&x;
//         printf("%p\n",ptr);
// }

// #include<stdio.h>
// void main(){
//         int x=10;
//         int *ptr1=&x;
//         int *ptr2=x;
//         printf("%p\n",ptr1);
//         printf("%p\n",ptr2);
// }

// segmentation fault or core dumped
// #include<stdio.h>
// void main(){

//         int x=10;
//         int *ptr1=&x;
//         int *ptr2=x;
//         printf("%p\n",ptr1);
//         printf("%p\n",ptr2);
//         printf("%p\n",*ptr1);
//         printf("%p\n",*ptr2); //segmentation fault
// }

//segmentation fault program2
// #include<stdio.h>

// int a=10;
// char b='A';

// void main(){

//         float x=25.5;
//         double d=35.555;
//         int *ptr1=&a;
//         char *ptr2=b;
//         float *ptr3=&x;
//         double *ptr4=&d;

//         printf("%p\n",ptr1);
//         printf("%p\n",ptr2);
//         printf("%p\n",ptr3);
//         printf("%p\n",ptr4);

//         printf("%d\n",*ptr1);
        // printf("%c\n",*ptr2); 
        // printf("%f\n",*ptr3);
//         printf("%lf\n",*ptr4);
// }

//*****Addition of pointer****/
// #include<stdio.h>
// void main(){

//         int x=10;
//         char ch='A';
//         int *ptr1=&x;
//         char *ptr2=&ch;
//         printf("%p\n",ptr1);
//         printf("%p\n",ptr2);
//         printf("%d\n",*ptr1);
//         printf("%d\n",*ptr2);                                                                                                         
// }

//addition of pointer   error: invalid operands to binary + (have ‘int *’ and ‘int *’)
// #include<stdio.h>
// void main(){

//         int x=10;
//         int y=20;
//         int *ptr1=&x;
//         int *ptr2=&y;
//         printf("%d\n",*ptr1+*ptr2);
//         printf("%p\n",ptr1+ptr2);

// }

// #include<stdio.h>
// void main(){

//         char x='A';
//         char y='B';
//         char *ptr1=&x;
//         char *ptr2=&y;
//         printf("%d\n",*ptr1+*ptr2);
//         printf("%p\n",ptr1+ptr2);
// }

// #include<stdio.h>
// void main(){

//         char carr[]={'A','B','C','D'};
//         char *ptr1=&carr[2];
//         char *ptr2=&carr[3];
//         printf("%c\n",*(ptr1));
//         printf("%c\n",*(ptr2));
//         printf("%c\n",*(ptr1+2));
//         printf("%c\n",*(ptr2+1));

// }

//subtraction of pointer
// #include<stdio.h>
// void main(){

//         int arr[]={10,20,30,40,50};
//         int *ptr1=&arr[0];
//         int *ptr2=&arr[3];
//         printf("%d\n",*ptr1);
//         printf("%d\n",*ptr2);
//         printf("%d\n",ptr2-ptr1);
//         printf("%d\n",ptr1-ptr2);
// }  

//division of pointer error invalid operands /
// #include<stdio.h>
// void main(){

//         int arr[]={10,20,30,40,50};
//         int *ptr1=&(arr[0]);
//         int *ptr2=&(arr[1]);
//         int x=ptr1-ptr2;  
//         printf("%d\n",ptr1/ptr2);   error
//         printf("%d\n",x);                                                                                                                     printf("%d\n",ptr1/ptr2);                                                                                                     
// }

// #include<stdio.h>
// void main(){

//         int arr[]={10,20,30,40,50};
//         int *ptr1=&(arr[0]);
//         printf("%d\n",*(ptr1++));
//         printf("%d\n",*(++ptr1));
// }

// #include<stdio.h>
// void main(){

//         int arr[]={10,20,30,40,50};
//         int *ptr=&(arr[0]);
//         ptr++;
//         printf("%d\n",*ptr);
//         ++ptr;
//         printf("%d\n",*ptr);
// }

// #include<stdio.h>
// void main(){

//         int arr[]={10,20,30,40,50};
//         int *ptr=&(arr[0]);
//         printf("%p\n",ptr);
//         printf("%d\n",(*ptr++));
//         printf("%d\n",(*ptr++));
//         printf("%p\n",(ptr));
// }


//void pointer
// #include<stdio.h>
// void main(){

//         int x=10;
//         int *iptr=&x;
//         void *vptr=&x;
//         printf("%p\n",iptr);
//         printf("%p\n",vptr);
//         printf("%d\n",*iptr);
//         printf("%d\n",*vptr);
// }      

//typecasting of void pointer
// #include<stdio.h>
// void main(){
//         int x=10;
//         void *vptr=&x;
//         printf("%d\n",*((int*)vptr));
// }

//wild pointer
// #include<stdio.h>
// void main(){

//         int x=10;
//         int *ptr;
//         printf("%p\n",ptr); //nil
//         printf("%d\n",*ptr);
// }

//null pointer
// #include<stdio.h>
// void main(){
//         int *iptr=NULL;
//         int *ptr=0;
//         printf("%p\n",ptr);
//         printf("%d\n",*ptr);
//         printf("%d\n",*iptr);
// }

// #include<stdio.h>
// void main(){
//         int x=10;
//         int y=20;
//         printf("%d %d\n",x,y);
//         x=y;
//         printf("%d %d\n",x,y);
// }

// #include<stdio.h>
// void main(){

//         int x=10;
//         printf("%d\n",x);
//         int *iptr=&x;
//         printf("%d\n",*iptr);
//         *iptr=30;
//         printf("%d\n",*iptr);
// }

// #include<stdio.h>
// void main(){

//         int arr[]={10,20,30,40,50};
//         int *iptr=&(arr[0]);
//         printf("%d\n",*iptr);
//         iptr++;
//         *iptr=70;
//         for(int i=0;i<5;i++){
//                 printf("%d\n",arr[i]);
//         }
// }

// #include<stdio.h>
// void main(){

//         int arr[]={10,20,30,40,50};
//         int *iptr=&(arr[0]);
//         printf("%d\n",*iptr);
//         (*iptr)++;
//         for(int i=0;i<5;i++){
//                 printf("%d\n",arr[i]);
//         }

// }

//dangling pointer
// #include<stdio.h>
// int a=10;
// int b;
// int *iptr=0;

// void func(){
//         int x=30;
//         printf("%d\n",a);
//         printf("%d\n",b);
//         iptr=&x;
//         printf("%p\n",iptr);
//         printf("%d\n",*iptr);
// }
// void main(){
//         int y=40;
//         printf("%d\n",a);
//         printf("%d\n",b);
//         func();
//         printf("%d\n",*iptr); //dangling pointer
// }

