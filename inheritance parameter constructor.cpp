#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<" in default of a\n";
			
		}
		
		A(int a)
		{
			cout<<"in parameter of A\n";
			this->a = a;
			
		}
		void display()
		{
			cout<"in display of A class\n";
			cout<<"value of a\n";
		}
};
class B : public A
{
		public:
		A()
		{
			cout<<" in default of a\n";
			
		}
		
		A(int a)
		{
			cout<<"in parameter of A\n";
			this->a = a;
			
		}
		void display()
		{
			cout<"in display of A class\n";
			cout<<"value of a\n";
		}
};
int main()
{
	B bobj;
	bobj.display();
}
