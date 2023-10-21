#include<iostream>

using namespace std;
#include<string.h>
int main(){
	
	char* name[5]={"Rohan","Ram","Rohini","Raju","Rancho"};
	for (int i=0;i<=5;i++)
	{	
		int x = strlen(name[i]);
		cout<<endl;
		cout<<"Name = "<< name[i]<<endl;
		cout<<"\n";
		cout<<"Address is"<<(name+i)<<endl;
		//cout<<*(name+i)<<endl;
		
		for(int j=0;j<x;j++)
		{
			cout<< *(*(name+i)+j);
			//cout<<"\n";
			
			
		}
		cout<<endl;
		cout<<"X = "<<x;
	}
}
