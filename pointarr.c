#include<stdio.h>
#define size 5
void array(char **arr)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%c\n",(*arr)[i]);
    }
}
int main()
{
        char c[size]={'a','e','i','o','u'};
        char (*arr)[size]={&c};
        array(&arr);
        return 0;
}
