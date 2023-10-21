//By using virtual keyword before parent class

#include<iostream>

using namespace std;

class A{
	public:
		int x =5;
	A(){
		cout<<"In default constructor of A \n";
	}
	
	~A(){
		cout<<"In destructor of A\n"<<endl;
	}
	
};
 
class B:virtual public A{
	public:
	B(){
		cout<<"In default constructor of B \n"<<endl;
	}
	
	~B(){
		cout<<"In destructor of B \n";
	}
};

class C: virtual public A{
	public:
	C(){
		cout<<"In default constructor of C \n"<<endl;
	}
	
	~C(){
		cout<<"In destructor of C \n";
	}
	

};


class D:public B , public C{
	
	public:
	D(){
		cout<<"In default constructor of D \n"<<endl;
	}
	
	~D(){
		cout<<"In destructor of D \n";
	}
	

};

int main(){
	D d1;
}
