#include<iostream>
using namespace std;

int main()
{
	int a[] = {4,3,3,8,5,2};
	int n =2 ;
	long long sum = 0 ;
	int len = sizeof(a)/sizeof(a[0]);
	cout<<"length"<<len<<endl;
	int j = 0  ;
	
	for (int i =len-1;i>=0;i--)
	
	{  
	    int k = 0 , mul = 1;
	while(k< i)
	{
		mul = mul * 10;
//		cout<<"mul"<<mul<<endl;
		k++;
	}
//	cout <<"mul"<<mul<<endl;
		sum = sum + (a[j]*mul);
//		cout <<"sum"<<sum<<endl;
		j++;
		
	}
	cout<<"sum"<<sum<<endl;
	int newsum = 1;
	
	for (int k=0;k<sum;k++)
	{
		newsum = newsum * 2;
		cout<<newsum<<endl;
	}
	cout<<"output "<<newsum%1337;
}
