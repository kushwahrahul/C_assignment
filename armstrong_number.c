#include<stdio.h>
int main(){


int mode,armnum=0,num = 153,temp;
temp=num;
while (num>0)
{
mode= num%10;
num=num/10;
armnum=armnum+mode*mode*mode;


}
if(armnum==temp){
printf("yes");
}

else
printf("NO");
}

