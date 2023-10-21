#include<iostream>

#include<string.h>
using namespace std;
class Student{
	int ID,RollNo;
	char Name[20];
	public:
	void get(){
		cout<<"enter ID";
		cin>>ID;
		cout<<"enter RollNo";
		cin>>RollNo;
		cout<<"enter Name";
		cin>>Name;
	}
	void sets(int id, int rollno, char name[]){
		ID=id;
		RollNo=rollno;
		strcpy(Name,name);
	}
	void Display(){
		cout<< "Student ID" << ID <<"\t"
		<<"Student Roll No"<<RollNo<<"\t"<<"Student Name"<<Name;
	}
	
};
int main(){
	Student s1[2];
	int i;
	for(i=0;i<2;i++)
		s1[i].sets(1,10,"aw");
		
	s1[i].Display();	
			
}
