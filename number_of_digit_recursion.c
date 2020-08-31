#include<stdio.h>


int function(int);
int main(){
int number,temp,count=0;
printf("number \n");
scanf("%d",&number);


count = function(number);

printf("%d",count);

return 0;

}
int function(int number){
static int count=0;

if(number>0){

	number=number/10;
count++;
//printf("count inside%d",count);
function(number);
}
else{
return count;
}

}
