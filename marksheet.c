#include<stdio.h>
#define max_mark 500
int main(){

	int  eng,hin,mat,sci,ss;
        float sum,avg;

	printf("enter the marks of all subjects out of 100\n");
	scanf("%d%d%d%d%d",&eng,&hin,&mat,&ss,&sci);
if((eng>100)||(hin>100)||(ss>100)||(sci>100)||(mat>100))
        printf("number should not be more than 100");
	sum=eng+hin+mat+sci+ss;
	avg=sum*100/max_mark;

	if((avg>33)&&(avg<50))
		printf("the grade is c");
	    if((avg>50)&&(avg<65))
		    printf("the grade is b");
	    if((avg>65)&&(avg<75))
		    printf("the grade is a ");
	    if(avg>75)
		    printf("the grade is a+ ");

	    return 0;
}

