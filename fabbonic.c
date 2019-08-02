#include<stdio.h>
int main(){
int first=0,second=1,next;
printf("Fibonacci Series");
for(int i=0;i<10;i++){
	printf("%d \n ",first);
	next=first+second;
	first=second;
	second=next;
}


return 0;
}
