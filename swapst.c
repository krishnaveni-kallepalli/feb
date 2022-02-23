/*
#include<stdio.h>
#define n 2
struct rect
{
    	unsigned int len;
	unsigned int wid;
};

void swap(struct rect r[]);

int main()
{
	struct rect r[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter len,width of rectangle%d \n",i+1);
		scanf("%u %u",&r[i].len,&r[i].wid);
	}
	swap(r);
	for(i=0;i<n;i++)
	{
		printf("length:%u\n",r[i].len);
		printf("width:%u\n",r[i].wid);
	}
}
void swap(struct rect r[])
{
int i;
	
	unsigned int temp;
	for(i=0;i<n;i++)
	{

	temp=r[i].len;
	r[i].len=r[i].wid;
	r[i].wid=temp;
	}
}
//swap the values of 2 struct elements , find area by passing struct to fn 
//use fn pointers , macro fn     */

#include<stdio.h>
#define n 2
struct rect
{
    	unsigned int len;
	unsigned int wid;
};

void swap(struct rect *r[]);

int main()
{
	struct rect r[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter len,width of rectangle%d \n",i+1);
		scanf("%u %u",&r[i].len,&r[i].wid);
	}
	swap(r);
	for(i=0;i<n;i++)
	{
		printf("length:%u\n",r[i].len);
		printf("width:%u\n",r[i].wid);
	}
}
void swap(struct rect *r[])
{
int i;
	
	unsigned int temp;
	for(i=0;i<n;i++)
	{
	temp=r[i]->len;
	r[i]->len=r[i]->wid;
	r[i]->wid=temp;
	}
}
//swap the values of 2 struct elements , find area by passing struct to fn 
//use fn pointers , macro fn     

