#include<iostream>
using namespace std ;

int main()
{
	int num , fact = 1, i ;
	cout<<"Enter no for factorial "<<endl;
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	cout<<"factorial = "<<fact;
}
