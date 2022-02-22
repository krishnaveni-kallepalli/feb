#define size 5                          
#include<stdio.h>     
void swap(int * const a,int * const b)
{
	int i=0,temp;
        for(i=0;i<size;i++)
	{
	       	temp = *(a+i);
        	*(a+i) = *(b+i); 
        	*(b+i) = temp;
	}
}             
int main()
{
	int a[size] = {2,3,5,7,9},b[size] = {11,13,17,23,41};
	int i=0;

	printf("Before swapping\n");

	for(i=0;i<size;i++)
	{	
		printf("a[%d]=%d b[%d]=%d\n",i,a[i],i,b[i]);
	}
	
	void (*fptr)(int *const a,int *const b);       
	fptr=swap;                                         
	fptr(a,b);                                 
	printf("After swapping\n"); 
	for(i=0;i<size;i++)
	{	
		printf("a[%d]=%d b[%d]=%d\n",i,a[i],i,b[i]);
	}
}


