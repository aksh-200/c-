#include<iostream>
using namespace std;
#include<string.h>

class complex
{
	int real , img;
	public:
		complex();
	complex(int , int);
	complex operator+(complex &);
	complex operator*(complex &);
	
	complex operator -(complex &);
		complex operator+(int);
		complex operator++();
		void display(char );
		void display(string );
     
};

complex::complex()
{
	real=img=0;
}

complex :: complex(int real , int img)
{
	this ->real  = real;
	this -> img = img;
}

complex complex::operator+(complex & c)

{
	complex temp;
	temp.real=this->real + c.real;
	temp.img=this->img + c.img;
	return temp;
}




complex complex :: operator*(complex & c){
	
	complex temp;
	temp.real = this->real * c.real;
	temp.img = this ->img * c.img ; 
	return temp;
}











complex complex :: operator-(complex & c)
{
	complex temp;
	temp.real=this->real - c.real;
	temp.img=this->img - c.img;
	return temp;
}


complex complex::operator+(int num)
{
	complex temp;
	temp.real=real + num;
	temp.img=this->img + num;
	return temp;
}


complex complex::operator++()
{
	this->real = this->real + 1;
	this->img = this->img +1;
	return (*this);
}
void complex::display(char p)
{
	cout<<"complex number is "<<real<<" "<< p<< " "<<img<<" "<<"i"<<endl;
}


void complex::display(string p) 
{
	cout<<"complex number is "<<real<<" "<< p<< " "<<img<<" "<<"i"<<endl;
}
int main()
{
	complex c1(2,3);
	complex c2(4,5);
	
	cout<<"Addition of two complex no"<<"    ";
	complex c3 = c1 + c2;
	
	c3.display('+');
		cout<<endl;
		cout<<"Multiplication of two complex no    ";
	complex c4 = c1 *c2;
	c4.display('*');
		cout<<endl;
		cout<<"Substraction of two complex no   ";
	complex c5 = c1 - c2;
	c5.display('-');
		cout<<endl;
		cout<<"Addition of one  complex no and single integer  ";
	complex c6=c1 + 5;
	c6.display('+');
	
		cout<<endl;
	cout<<"use of ++ operator  ";
	complex c7 = ++c1;
	c7.display("+");
	
	
	
	}
