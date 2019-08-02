#include<stdio.h>
void display(int arr1[], int total );
void reversedisplay(int arr1[], int total);
int main()
{
	int arr1[20],total;

	printf("\n enter the total numbers to be displayed \n ");
	scanf("%d",&total);

	printf("\n enter the numbers to be displayed \n");
	 
	for(int i=0;i<total;i++)
	{
		 scanf("%d",&arr1[i]);
	}

	printf("the numbers to be displayed are \n");
	display(arr1,total);

	printf("the reverse of the numbers are \n");
	reversedisplay(arr1,total);

	return 0;

}

void display(int arr1[],int total)
{
  static   int count=0;
    if(total>0)
    {
	    printf("%d",arr1[count]);
	    count++;
	    total--;
	    display(arr1,total);
    }

}

void reversedisplay(int arr1[], int total )
{

if(total>0)
{
	printf("%d",arr1[total-1]);
         total--;
	 reversedisplay(arr1,total);
	 }


}
