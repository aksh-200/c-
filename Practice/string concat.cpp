#include<iostream>
using namespace std;
#include<string.h>
void strcon(char*p , char*q )
{
	
	int i =0 , j = 0;
	while(p[i] != '\0')
	{
		
		i++;
	}
	while(q[j]!= '\0')
	{
		//*p = *q;
//		cout<<"q[j] -> "<<q[j];
	    p[i] = q[j];
		i++;
		j++;
		
	}
    cout<<"concat string is :> "<<p;
	
	
}
int main()
{
	char a[20], b[20];
	cout<<"enter string";
	//gets(a);
	cin>>a;
	cout<<"enter string";
	//gets(b);
	cin>>b;
	strcon(a , b);


}
