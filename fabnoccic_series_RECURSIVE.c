#include<stdio.h>
int main(){

	int fab,a=0,b=1;
        

        
      int  number=10;

	fabfun( number);
}


void fabfun(int number){

	static int first=0,second=1,next;
	if(number>0){
	
	printf("%d \n ",first);
	next=first+second;
	first=second;
	second=next;
	fabfun(--number);

	}



}
