#include<stdio.h>
int main()
{
	struct st
	{
		enum week
                {
			sun,monday,tue,wed,thu,fri,sat
		}w;
		
	}s;
	printf("%ld",sizeof(struct st));
}
