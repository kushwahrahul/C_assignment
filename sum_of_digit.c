#include<stdio.h>
int main(){


int mode,mnum=0,num,temp,tempsum=0;
printf("enter a number ");
scanf("%d",&num);

while (num>0)
{
mode= num%10;
num=num/10;
mnum=mnum+mode;


}
while(mnum>0){
temp=mnum%10;
mnum=mnum/10;
tempsum=tempsum+temp;

}
printf("%d",tempsum);
}

