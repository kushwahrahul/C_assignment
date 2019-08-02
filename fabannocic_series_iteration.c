#include<stdio.h>
int main()
{
	int fact=1,i,n;

	printf("enter the number to find it's factorial \n");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}

	printf("the factorial of this number is %d ",fact);

return 0;




}
