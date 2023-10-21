#include <iostream>     
using  namespace std;  
#include<string.h>
#include <iomanip>    
class date
{
	int dd,mm,yy;
	public:
		void get()
		{
			cout<<"Enter date "<<setw(10);
			cin>>dd;
			
			cout<<"Enter month\n";
			cin>>mm;
			
			cout<<"Enter year";
			cin>>yy;
		}
		void put()
		{
			cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class student
{
	int rollno;
	char name[10];
	int marks[3] , sum = 0;
	float avg ;
	date d;
	
	public:
		float avg1 ;
		void get()
		{  //cout<<"**********************************\n";
		     cout << setfill('x') ;  
			sum = 0  ;
			avg = 0;
			cout<<"enter rollno\n";
			cin>>rollno;
			cout<<"enter student name\n";
			cin>>name;
			cout<<"Enter 3 subjects marks one by one\n";
			for (int p = 0;p<3;p++)
			{
				cout<<"Enter mark of "<<p+1<<" st  subject"<<endl;
				cin>>marks[p];
				sum = sum + marks[p];
				//	cout<<"OutoF sum"<<sum<<endl;
			}
		
		//	cout<<"OUTPUT oF sum"<<sum<<endl;
			avg = sum/3;
			avg1 =avg;
			d.get();
		}
		
		void put()
		{
			cout<<rollno<< setw(10)<<name<< setw(10)<<"avg marks ="<<avg1<<endl;
			d.put();
		}
		int getrollno()
		{
			return rollno;
		}
		char* getname()
		{
			return name;
		}
		
		int get_avg()
		{   //cout <<"avg marks is"<<avg1;
			return avg1;
		}
	
		
		
};
int main()
{
	student s[10],temp;
	int i,n,j;
	cout<<"enter value of n\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
		
	}
//	cout<<"try get_avg\n"<<s[0].get_avg()<<endl;
cout<<"******************************"<<endl<<endl;
	cout<<"sort information\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].get_avg() > s[j].get_avg())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].put();
}
