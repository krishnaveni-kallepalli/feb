#define size 10                           
#include<stdio.h>
int cmp(char * const a,char * const b)
{
	int i =0,count=0;
	
        while(*(a+i)!='\0' && *(b+i)!='\0')
	{
		if( *(a+i) == *(b+i) ) 
		i++;
		else
		break;
	}
	if(*(a+i)=='\0' && *(b+i)=='\0')
	return 0;
        else
	return (*(a+i) - *(b+i));
}                 
int main()
{
	char a[size],b[size];
	scanf("%s %s",a,b);
	int c =0;
	int (*fptr)(char *const a,char *const b);       
	fptr = &cmp;                                         
	c = fptr(a,b);                                     
	if(c == 0)
	printf("both the strings are equal\n");
	else if(c > 0)
	printf("string 1 is greater than string 2\n");
	else
	printf("string 1 is less than string 2\n");
	/*if(c == 0)
	printf("both the strings are equal\n");
	else
	printf("both are not eql\n");*/
}


