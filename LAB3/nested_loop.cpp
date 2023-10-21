#include<iostream>
using namespace std;

int main()
{
	int row,col;
	for(row=5; row<=10; row++ )
	{
		for(col=1; col<=10; col++)
		{
			cout<<row*col<<endl;
		}
		cout<<endl;
	}
}

