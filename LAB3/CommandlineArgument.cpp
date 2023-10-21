#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	cout<<"enter an argc = ";
	cin>>argc;
	cout << "You have entered " << argc << " arguments:"<< "\n";
	for (int i = 0; i <=argc; i++)
	{
		cout << argv[i] << "\n";
		cout<<"arg" <<argc;
		cout<<"r";
	}
	return 0;
}

