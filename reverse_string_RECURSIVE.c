#include<stdio.h>
void display(char [],int);
void displayreverse(char [],int);

int main()
{
        int size;
	char arr1[20],arr2[20];

        printf("enter the size of string \n ");
	scanf("%d",&size);

	printf("enter the characters to make the string \n ");
	{
		for(int i=0;i<=size;i++)
		{
			scanf("%c",&arr1[i]);
		}
	}

printf(" \n the string is \n");
 { display(arr1,size);
   }
printf("\n the reverse string is \n");
{ displayreverse(arr1, size);
 }

return 0;	
	
}

void display(char arr1[],int size)
{


   static  int  count=0;
   if(size>=0){
		printf("%c",arr1[count]);
                  count++;
		  size--;
	  display(arr1,size);   	
	}

}

void displayreverse(char arr1[],int size)
{
   
  
   if(size>=0){
printf("%c",arr1[size]);
size--;
displayreverse(arr1,size);
   
   
   }
}
