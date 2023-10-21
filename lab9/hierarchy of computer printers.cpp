#include<iostream>
using namespace std;

class Mouse
{
	protected:
	
		public:
			Mouse()
			{
				cout<<"Default in Mouse "<<endl;
				
			}
	        void display()
        	{
        		cout<<"in display of mouse"<<endl;
        	}
		
};
	
class Cpu
	{
		public:
			Cpu()
			{
				cout<<"In default of CPU"<<endl;
				
			}
			void display()
			{
				cout<<"In display of CpU"<<endl;	
			}
};

class Device:public Cpu,public Mouse
{
	private:
	int x=7;
	public:
	Device()
	{
		cout<<"Default in device "<<endl;
			
	}	
	void display()
	{
		cout<<"Device in display"<<endl;
	    Cpu::display();
	    Mouse::display();
		
	}
	friend void  printer(Device &,int x);
};
void printer(Device &,int x)
{
	cout<<"In friend function access the private data of x "<<x<<endl;
}


int main()
{
    Device d;
    d.display();
}
