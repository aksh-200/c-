#include<iostream>
using namespace std;

int main()
{
	
	int base , exp , pow = 1;
	cout<<"Enter base"<<endl;
	cin>>base;
	cout<<"enter exp"<<endl;
	cin>>exp;
	
	for(int i= 0;i<exp;i++)
	{
		pow = pow * base;
	}
     	
	cout<<"pow is = "<<pow;
}
