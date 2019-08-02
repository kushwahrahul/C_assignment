#include<stdio.h>
int count0=0,count1=0;
int main()
{

	int number;

	printf("enter number \n ");
	scanf("%d",&number);




	printcount(number);

printf("COunt0 is  =  %d",count0);
printf("\ncount1 is  = %d",count1);


}


void printcount(int number ){

	if(number>0){
    
    if(number%10==0){
	    count0++;
    
    }
    else
	    count1++;

	printcount(number/10);
	
	}



}
