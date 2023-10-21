#include <iostream>     
using  namespace std;  

class addi
{
	int real , img;
	
	public:
		addi()
		{
		}
	addi(int r, int i)
	{
		real = r;
		img = i;
		
	}
	addi  add_obj(addi & j)
	{
		
		addi temp ;
		temp.real = this ->real + j .real;
		temp.img = this->img + j.img;
		return  temp; 
	}
};
int main()
{
	addi a1(10,20) ;
	addi a2(40,50);
	addi a3;
    a3 = 	a1.add_obj(a2);
	
	cout<<"a3.real:"<<a3.real <<"a3.img - "<<a3.img;
 
	
}
