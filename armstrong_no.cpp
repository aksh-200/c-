#include<iostream>
using namespace std;
int main()
{
	int num , orgnum = 0 , rem ;
	cin>>num;
	int orgnum1 = num;
	while(num>0)
	{
		
		rem = num%10;
		orgnum = orgnum + (rem*rem*rem);
	
		num = num/10;
	}	
	
//	cout<<"org "<<	orgnum<<endl;
//	cout<<"num"<<num<<endl;
	if(orgnum1== orgnum)
	{
		
		cout<<" is Armstrong no";
	}
	
	else{
		cout<<" is not Armstrong no";
	}
	
	
}
