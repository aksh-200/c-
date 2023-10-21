#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	char *ptr;
	printf("enter no of character\n");
	scanf("%d",&n);
	ptr=(char *) malloc(n*sizeof(char)+1);
	printf("accept string\n");
	scanf("%s",ptr);
	printf("display string\n");
	printf("%s",ptr);
	free(ptr);
	
}
