#include<iostream>
using namespace std;
float division(int x, int y)
{
	if (y==0)
	{
	
	throw " Attempt to divide by 0\n";
 }
	return(x/y);
}
int main()
{
	int i = 25;
	int j;
	float k;
	
	try {
		cout<<"enter value of j ";
		cin>>j;
		k = division(i,j);
		cout<<k<<endl;
		
	}
	
	catch (const char *e)
	{
		cout<<e<<endl;
	}
}
