#include<stdio.h>
int main()
{
int i;
printf("enter a number \n ");
scanf("%d",i);
		check(i);
	
}

void check(int n){
	int  i, test = 0;

       for(i = 2; i <= n/2; ++i)
    {
       
        if(n%i == 0)
        {
            test = 1;
            break;
        }
    }

    if (n == 1) 
    {
     printf("not prime number");
    }
    else 
    {
        if (test  == 0)
          printf(" prime number %d ", n);
       
    }
    
    
}
