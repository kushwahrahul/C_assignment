#include<stdio.h>
void octal(int);
int main(){

int number,m1,arr1[20],i=0,j=0,ch,result=0;
printf("choice press 1 for octal and 2 for binary \n");
scanf("%d",&ch);

printf("enter the decimal number \n ");
scanf("%d",&number);

switch(ch){
	case 1:{
		       
printf("the octal equvivalent is \n");
while(number>0)
{
	m1=number%8;
//if(	m1==0){
//result=1;
//}
	result= result+10*m1;
        number=number/8;

	
	//arr1[j++]=m1;
}

/*for(int k=j-1;k>=0;k--)
{

printf("%d",arr1[k]);
}*/


printf("result %d",result);
}
break;


case 2:
{
int mode;
printf("the binary equvivalent is\n ");
while(number>0)
{
	mode=number%2;
	number=number/2;
	result=mode+result*10;

	printf("mode %d",&result);
	//arr[i++]=mode;
}

/*for(int j=i-1;j>=0;j--)
{

printf("%d",arr[j]);
}

*/

printf("result is %d",result);
}

break;

default :
{

printf("wrong choice");
}
}
}
