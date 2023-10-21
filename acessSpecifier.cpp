#include<iostream>
using namespace std;
class Parent
{
	int c;
	public:
		int a;
		protected: 
		int b;
		public:
			void show()
			{
				cout<<"Display of parent"<<endl;
				
			}
};

class child1:private Parent{
	
	public:
		void show()
		{
				//	Parent::show();

			cout<<a<<" "<<b;
		}
	
};

class child2:public child1
{ 
public:
  void show()
  {
  	cout<<a<<" "<<b;
  }
   
   	
};


int main()
{
	Parent p;
	p.show();
	child1 c;
	c.show();
	child2 d;
	d.show();
}
