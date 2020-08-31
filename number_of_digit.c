#include<stdio.h>

int main(){

int number,temp,count=0;
printf("number \n");
scanf("%d",&number);
while(number>0){

	number=number/10;
count++;
}


printf("%d",count);



}
