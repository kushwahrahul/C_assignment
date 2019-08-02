#include<stdio.h>

int main(){


int ch,a,b;
printf("enter your choice \n press 1 for add \n press 2 for subtract \n press 3 for multiplication \n press 4 divide   ");
scanf("%d",&ch);
printf("enter value of a");
scanf("%d",&a);
printf("enter value of b ");
scanf("%d",&b);
switch(ch){

	case 1 :{
		
			printf("Add = %d",add(a,b));
		}
		break;
	case 2:
		{
		
			printf("Subtract =  %d" ,sub(a,b));
		}
		break;

		case 3:
                {

                        printf("Multiplication =  %d" ,mul(a,b));
                }
                break;

		case 4:
                {

                        printf("devide =  %d" ,div(a,b));
                }
                break;


	default :

		printf("wrong choice");

}




}


int add(int a ,int b){

	return a+b;


}
int mul(int a ,int b){

        return a*b;


}
int div(int a ,int b){

        return a/b;


}
int sub(int a ,int b){

        return a-b;


}

