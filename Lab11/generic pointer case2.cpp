//object creation on heap without using virtual keyword

#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary()
		{   
		     cout<<"IN base class salary function\n";
			return 0;
		}
};
employee::employee()
{
	cout<<"in default of employe\n"<<endl;
	id=0;
}
employee::employee(int i){
	cout<<"in para of emp"<<i<<endl;
	
}
void employee::display()
{
	cout<<"id of employe is\n"<<id<<endl;
}
class wageemployee:public employee
{
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
		int findsalary();
};
wageemployee::wageemployee(){
	cout<<"in default of wage\n";
	hrs=0;
	rate=0;
}
wageemployee::wageemployee(int i,int h,int r):employee(32)
{
	cout<<"in para of wage\n";
	hrs=h;
	rate=r;
}
int wageemployee::findsalary()
{    
	cout<<"in wageemployee salary function\n";
	return hrs*rate;
}
void wageemployee::display()
{
	employee::display();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}
class salesmanager:public wageemployee
{
	int sales,comm;
	public:
		salesmanager();
		salesmanager(int,int,int,int,int);
		void display();
		int findsalary();
};
salesmanager::salesmanager()
{
	cout<<"in default of sales\n";
	sales=comm=0;
}
salesmanager::salesmanager(int i,int h,int r,int s,int c):wageemployee(i,h,r)
{
	cout<<"in para of sales\n";
	sales=s;
	comm=c;
}
void salesmanager::display(){
	wageemployee::display();
	cout<<"sales of an employee is"<<sales<<endl;
	cout<<"comm of an emp is"<<comm<<endl;
}
int salesmanager::findsalary(){
	cout<<"in sales manager salary function";
	return (wageemployee::findsalary())+sales*comm;
}
int main()
{
employee *ptr = new employee();
ptr -> findsalary();
wageemployee w1(2,10,2000);  // even after calling findsalary through wage obj it return base class findsalary function
	
ptr = &w1;
  ptr -> findsalary();
    ptr -> display();
    salesmanager s1(2,10,2000,600,1);
     ptr = &s1;
     ptr -> findsalary();
      ptr -> display();
}
