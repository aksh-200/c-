#include<iostream>
using namespace std;
class A {
   
   
   public:
    int a = 10;	
    
    void show_outer()
    {
    	cout<<"outer data"<<a;
	}
   	
   class B {
      
      int num;
      public:
      	int b =20;
      	
      void get(int n)
	   {
         num = n;
      }
      void show() 
	  {
         cout<<"The number is "<<num;
      
      }
   };
 
};
int main() {
  
     A :: B obj;
   
    //obj.B.get(9);
   obj.get(9);
   obj.show();
   
   
   return 0;
}
