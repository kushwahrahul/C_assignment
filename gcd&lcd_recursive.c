#include<stdio.h>
int functiongcd(int,int);
int main()
{
   
	int num,den,n1,n2;

	printf("enter two numbers \n");
	scanf("%d %d",&n1,&n2);

	if(n1>n2)
	{

		num=n1;
		den=n2;

	}
	else 
	{
		num=n2;
		den=n1;
	}

	printf("gcd is =  %d",functiongcd(num,den));

	return 0;


}

int functiongcd(int num, int den )
{
 int  rem,gcd;

rem=num%den;

if(rem!=0)
{

num=den;
den=rem;
rem=num%den;
functiongcd(num,den);

}
else{
gcd=den;

//printf("%d",gcd);

return gcd;
}
}
