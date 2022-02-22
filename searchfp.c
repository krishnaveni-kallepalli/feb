#define size 5                          
#include<stdio.h>
int search(char arr[],char element)
{
	int i=0;
        for(i=0;i<size;i++)
	{
	       	if(*(arr+i) == element)
		return 0;
	}
return 1;
}
int main()
{
	char arr[size] = {'a','e','i','o','u'},element;
	printf("Enter element to search:\n");
	scanf("%c",&element);
	int (*fptr)(char [],char );                          
	fptr=search;                                     
	if(fptr(arr,element)==0)                        
	printf("element found\n");
	else
	printf("element is not found");
	return 0;
	
}


