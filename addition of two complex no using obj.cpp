#include<iostream>
using namespace std;

class temp
{
	
	int a , c;
	
	
	public:
	temp add(temp & b)
	{
		
		temp obj3;
		
		obj3.a = this->a + b.a;
		obj3.c = this->c + b.c;
		
	return obj3;	
	}
	
	temp getreal()
	
	{   cout<<"Enter real no \n";
		cin>> this->a;
	}
	
		temp getimg()
	{   cout<<"Enter imaginary no\n";
		cin>> this->c;
	}
	
	void show()
	{
		cout<<"addition   =  "<<a<<"+"<<c<<"i" ;
	}
	
};

int main()
{  temp obj1 , obj2;

 obj1.getreal();
 
 obj1.getimg();
 obj2.getreal();
 
 obj2.getimg();
 temp obj4 = obj1.add(obj2);
 
 obj4.show();
}
