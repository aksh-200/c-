//object creation on heap without using virtual keyword

#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		virtual void display();
     	virtual	int findsalary()
		{   
		    
			return 0;
		}
};
employee::employee()
{
	cout<<"in default of employe\n"<<endl;
	id=0;
}
employee::employee(int i){
	cout<<"in para of emp\n"<<i<<endl;
	
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
	
	
	return hrs*rate;
}
void wageemployee::display()
{
	employee::display();
	cout<<"hrs "<<hrs<<endl;
	cout<<"rate  "<<rate<<endl;

	cout<<"wageemployee salary is =   "<<wageemployee::findsalary()<<endl ;
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
	cout<<endl<<"sales of an employee is\n"<<sales<<endl;
	cout<<endl<<"comm of an emp is\n"<<comm<<endl;
	cout<<endl<<"sales manager salary is   "<<findsalary();
}
int salesmanager::findsalary(){
	cout<<"in sales manager salary function\n";
	return (wageemployee::findsalary())+sales*comm;
}
int main()
{
	employee *ptr;


   
     salesmanager s1(2,10,2000,600,1);
     ptr = &s1;
     ptr -> findsalary();
      ptr -> display();
}
