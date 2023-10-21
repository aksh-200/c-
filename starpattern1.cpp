#include<iostream>
using namespace std;

int main()
{


int row =1 , col = 1 , count = 1;

for(row = 1; row<=4;row++)
{
	for(col = 1 ; col<= row ; col++)
	{
		cout<<count<<" ";
		
		count++;
	}
	cout<<endl;


}
}
