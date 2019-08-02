#include<stdio.h>
int main(){


	int n1,n2,num,dem,rem,gcd,lcm;

	printf("Enter two values \n");
	scanf("%d",&n1);
	scanf("%d",&n2);

	if(n1>n2){
		num=n1;
		dem=n2;
		
	}
	else{
	num=n2;
	dem=n1;

	}

	rem = num%dem;

	while(rem!=0){

		num=dem;
		dem=rem;
		rem=num%dem;
	
	}

	gcd= dem;
	lcm=(n1*n2)/gcd;

	printf(" lcm is= %d",lcm);
	printf("gcd is= %d ",gcd);

	return 0;
}
