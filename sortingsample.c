#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    char *pstring=malloc(32);
    gets(pstring);
    printf("The string is %s", pstring);
    return 0;
}
