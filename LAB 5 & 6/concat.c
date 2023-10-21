#include<stdio.h>

int main()
{
char a[20] , b[20];

printf("Enter string");
scanf("%s",&a);

printf("Enter string");
scanf("%s",&b);



char userconcat(char *p , char *q)
{
	while( *p!= '\0')
	{
		p++;
		
	}
	
	while( *q != '\0')
	{
		*p = *q;
		p++;
		q++;
		
	}
	
	*p = '\0';
	
	
}

userconcat(&a , &b);

printf("\n%s",a);



}

