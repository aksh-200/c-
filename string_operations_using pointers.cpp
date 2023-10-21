#include<iostream>
using namespace std;

class string1
{
	char *ptr1 , *ptr2;
	int l ;
	public: 
	   void len(char *);
	   void copy(char * );
	   
};

void string1 :: len(char * p)
{
	int i = 0;
	while(p[i] != '\0')
	{
		i++;
	}
	l = i;
	cout<<"length of string : - "<<p <<" is "<< l<<endl;
}


void string1 :: copy(char *p )
{
  for (int i = 0; p[i] != '\0'; ++i) {
      ptr1[i] = p[i];
      cout<<p[i];
    }
}

int main()
{
	string1 s1;
	s1.len("rahul");
	s1.copy("Akshay");
}
