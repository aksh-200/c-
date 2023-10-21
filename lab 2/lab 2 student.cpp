
#include <iostream>     
using  namespace std;  
#include<string.h>
class date
{
	int dd,mm,yy;
	public:
		void get()
		{
		
			
			cout<<"Enter date\n";
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
	date d;
	
	public:
		void get()
		{   cout<<"\n************************************************\n";
			cout<<"enter student rollno\n";
			cin>>rollno;
			cout<<"enter student name\n";
			cin>>name;
			d.get();
		}
		void put()
		{   
		  cout<<endl;
			cout<<" Roll No = "<<rollno<<"      "<<"Name = "<<name<<endl;
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
	cout<<"\n**********************************\n";
	cout<<"sort information\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
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
