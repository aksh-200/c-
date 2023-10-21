#include<iostream>
using namespace std;


class date
{
	
	int dd , mm, yy;
	
	public:
		
		void display();
		date(int , int , int);
		
};

date :: date(int d , int m , int y)
{
	dd = d;
	mm = m ;
	yy = y;
}

void date :: display()
{
	cout<<"date "<<dd <<"  month "<<mm<<"   year "<<yy<<endl;
}


int main()
{
	date d(8,12,2022);
	date d1(d);
	d.display();
	d1.display();
}
