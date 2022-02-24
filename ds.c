#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char ch;
	struct node *ptr;
}n;
int main()
{
	struct node *s[5];
	int i;
	for(i=0;i<5;i++)
	{
		s[i]=(n*)malloc(sizeof(n));
		s[i]->ch='A';
		if(i<4)
			s[i]->ptr=s[i+1];
		else
			s[i]->ptr=NULL;
		
	}
	for(i=0;s[i]->ptr!=NULL;i++)
	{
		printf("%c\n",s[i]->ch);
	}
}
