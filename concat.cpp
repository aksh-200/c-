#include<iostream>
using namespace std;
char userconcat(char * , char *);

int main()
{
char a[20] , b[20];


cout<<"Enter string";
cin>>a;
cout<<"Enter string";
cin>>b;



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

cout<<a;



}

