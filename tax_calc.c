#include<stdio.h>

int main(){


int mincome,gender,annual,age,investment;
float tax,temp;
printf(" *******************TAX CALCULATOR***************** \n ");
printf("Enter your mothly income = \n ");
scanf("%d",&mincome);
printf("enter your gender for male press 1 for female press 2 \n");
scanf("%d",&gender);
printf("enter your age  in number \n ");
scanf("%d",&age);
printf("investment = \n ");
scanf("%d",&investment);

if(investment>=20000){

	annual=annual-20000;
}
else{

annual=annual-investment;
}
annual=mincome*12;

if(annual>=200000&&gender==2){

if(age>60){

	tax=0;

}
else{
if(annual>=200000&&annual<=500000){



temp=annual;

tax=annual*5/100;


}
else{

temp=annual;

tax=annual*12/100;
}

}


}
else{

if(age>60){

        tax=0;

}
else{
if(annual>=200000&&annual<=500000){



temp=annual;

tax=annual*12/100;


}
else{

temp=annual;

tax=annual*18/100;
}

}


}







printf("your tax is  = %f",tax);


}
