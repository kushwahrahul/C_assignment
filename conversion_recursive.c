#include<stdio.h>
void octal(int);
int main(){

int number,m1,arr1[20],i=0,j=0,ch;
printf("choice press 1 for octal and 2 for binary \n");
scanf("%d",&ch);

printf("enter the decimal number \n ");
scanf("%d",&number);

printf("the octal equvivalent is \n");
switch(ch){
	case 1:{
while(number>0)
{
	m1=number%8;
	number=number/8;
	arr1[j++]=m1;
}

for(int k=j-1;k>=0;k--)
{

printf("%d",arr1[k]);
}
}
break;


case 2:
{
int mode,arr[20];
printf("the binary equvivalent is\n ");
while(number>0)
{
	mode=number%2;
	number=number/2;
	arr[i++]=mode;
}

for(int j=i-1;j>=0;j--)
{

printf("%d",arr[j]);
}
}

break;

default :
{

printf("wrong choice");
}
}
}
