#include<iostream>
using namespace std;

int main()
{ 
int n ;
cout<<"Enter size";
cin>>n;
int * ptr = new int[n];

for(int i = 0 ; i<n;i++)
{
	cin>>ptr[i];
}

cout<<"numbers in array"<<endl;
for(int i = 0;i<n ; i++)
{
	cout<<ptr[i];
	cout<<endl;
}

delete[] ptr;
	
	
}
