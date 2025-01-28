#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
srand(time(0));
int userOTP;
char phone_Num[10];
int len;
int random = rand()%9000+1000;
printf("Enter Your Phone Number : ");
fgets(phone_Num,sizeof(phone_Num),stdin);
len = strlen(phone_Num);
//len++ used to increase 1 to match 10
len++;

getchar();
if(len!=10){
printf("Enter Valid Number");
}
else{
printf("OTP is %d\n",random);
printf("Enter OTP : ");
scanf("%d",&userOTP);
if(userOTP==random){
printf("you have successfully logged");


}
else{
printf("Enter Valid OTP");
}
}

return 0;
}
