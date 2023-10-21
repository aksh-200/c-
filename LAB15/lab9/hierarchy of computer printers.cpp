#include<iostream>
using namespace std;
class Device
{ 
private:
int x=5;
	public:
		Device()
		{
			cout<<"default in Device"<<endl;
		}
		void display()
		{
			cout<<"in display of Device"<<endl;
	    }
	    friend void printer(Device &, int x);
	    
		
};

void printer(Device &, int x)
{
	cout<< "In Friend function value of private variable x = "<<x<<endl;
}

class Mouse
{ protected:

	public:
		Mouse()
		{
			cout<<"default in Mouse"<<endl;
		}
		void display()
		{
			cout<<"in display of Mouse"<<endl;
				
		}
		
};
class Cpu:public Device, public Mouse
{
 
	public:
		Cpu()
		{
			cout<<"default in Cpu"<<endl;
		}
		void display()
		{
			cout<<"in display of Cpu"<<endl;
		
			
		}
		
};
int main()
{
	Cpu cobj;
	Cpu::Device().display();
 cobj.Mouse::display();
  cobj.Device::display();
  
printer(cobj, 7);
}
