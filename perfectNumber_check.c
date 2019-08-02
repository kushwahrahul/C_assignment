#include<stdio.h>
int main(){


int mode,mnum=0,num,temp,tempsum=0;
printf("entere a number ");
scanf("%d",&num);
for(int i=1;i<=num;i++){

	if(num%i==0){
	
	mnum=mnum+i;
	}


}

temp=mnum/2;

if(temp==num){

	printf(" %d is  Perfect no ",num);
}
else{

printf("SOrry it is not Perfect number");


}
}

