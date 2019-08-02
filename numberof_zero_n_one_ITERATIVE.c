#include<stdio.h>
int main()
{

	int number,count0=0,count1=0; 

printf("enter the number \n");
scanf("%d",&number);
while(number>0){
    
    if(number%10==0){
	    count0++;
    
    }
    else
	    count1++;

	number=number/10;
	
	}


printf("COunt0 is  =  %d",count0);
printf("\ncount1 is  = %d",count1);


}
