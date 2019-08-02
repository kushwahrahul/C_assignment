#include<stdio.h>

int main(){

int base , power;

printf("enter base \n ");
scanf("%d",&base);

printf("enter power \n ");
scanf("%d",&power);

int result= powercal(base,power);

printf("result is %d",result);
}

int  powercal(int base,int power ){

                if(power>0){
		
		return  base*powercal(base,--power);
          
		}
		else
			return 1;
	

}
