#include<iostream>
using namespace std;
int main()
{
	int row , col;
	for(row = 1; row <10;row++)
	{
		for(col = 1; col<row ; col++)
		{
			if (col % 2 == 0)
			{
				cout<< "0";
				
			}
			else{
				cout<<"1";
			}
		
		}
			cout<<endl;
	}
}
