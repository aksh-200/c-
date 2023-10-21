#include<iostream>
using namespace std;

int main()
{
	int prev = 0 , next = 1 , n ,temp;
	cout<<"Enter no";
	cin>>n;
	cout<<prev<<endl;
	cout<<next<<endl;
	
	for(int i = 3;i<n;i++)
	{   
	
	         temp = next;
		     

	     next = prev + next;
	     prev = temp;
	    cout<<next;
	    
		cout<<endl;
	}
	
	
}
