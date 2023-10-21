#include<iostream>
using namespace std;
int main()
{
	int a [10] = {10,2,5,4,9,11,2,15,17,18};
	int max=a[1];
	
	for(int i=1; i<9;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			
		}
	}
	cout<<max;
}
