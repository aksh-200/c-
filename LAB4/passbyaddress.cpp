#include<iostream>
using namespace std;
void swap(int* ,int* );
int main()
{
	int a,b;
	cout<<"enter value of a";
	cin>>a;
	cout<<"enter value of b";
	cin>>b;
	cout<<"before swapping value of a and b are "<< a <<" "<< b <<endl;
	swap(&a,&b);
}
void swap(int* p ,int* q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"after swapping value of a and b are "<< *p <<" "<< *q <<endl;
}
