#include<iostream>
using namespace std;
int main()
{
	int row, col;
	char ch='A';
	for(row=1;row<=6;row++)
	{
		for(col=1;col<=row;col++)
		{
			cout<<ch;
		}
		ch++;
		cout<<endl;
	}
}
