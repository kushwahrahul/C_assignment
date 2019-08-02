#include<stdio.h>
int main()
{

	for (int i=1;i<20;i++){
		check(i);
	}

	return 0;
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
     
    }
    else 
    {
        if (test  == 0)
          printf("%d ", n);
       
    }
    
    
}
