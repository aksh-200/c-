#include<iostream>
using namespace std;

class temp
{
	
	int a;
	
	
	public:
	temp add(temp & b)
	{
		
		temp obj3;
		
		obj3.a = this->a + b.a;
	return obj3;	
	}
	
	temp get()
	{
		cin>> this->a;
	}
	
	void show()
	{
		cout<<"addition   =  "<<a;
	}
	
};

int main()
{  temp obj1 , obj2;

 obj1.get();
 obj2.get();
 temp obj4 = obj1.add(obj2);
 
 obj4.show();
}
