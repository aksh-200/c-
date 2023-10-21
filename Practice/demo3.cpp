#include<iostream>
using namespace std;
 
 class complex 
 {
 	int real , img ;
 	public:
 	complex(int r , int m)
 	{
 		 real  = r;
 		img = m;
 		
	 }
	 void show()
	 {
	 	cout<<this->real+1<<"+"<<this->img+1; 
	 }
 };
 
 int main()
 {
 	complex* p1 = new complex(10,30);
 	p1->complex::show();
 }
