#include<stdio.h>
int main(){

	int base,pow,result=1;

	printf("enter the base \n");
	scanf("%d",&base);

	printf("enter the power \n");
	scanf("%d",&pow);

	for(int i=0;i<pow;i++)
	{
		result=result*base;
	}

	printf("the result is %d \n",result);
	return 0;
}
