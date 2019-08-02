

#include<stdio.h>
int sum =0;
void  fun(int);
int main()
{


int n;
printf("enter the numbee");
scanf("%d",&n);
fun(n);

printf("%d",sum);

return 0;
}


void  fun(int n){

	
	if(n>0){
	sum = sum + n;
	fun(--n);	
	
	}
	
}
