#include<iostream>
using namespace std;
void get(int,int);
void display();
class complex
{
	
int real,img;
public:
void get()
	{
		cout<<"Enter real"<<endl;
		cin>>real;
		cout<<"Enter imginary"<<endl;
		cin>>img;
	}
void display()
	{
		cout<<"The complex number is"<<real<<"+"<<img<<"i"<<endl;
	}
};
int main()
{
	complex c1;
	c1.get();
	c1.display();
	return 0;
}
