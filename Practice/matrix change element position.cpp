/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int temp , i , j;
    for( i= 0; i<9;i++)
    {   
         
              if(i%2==0)
        {
            temp = a[i][0];
            a[i][0]=a[i][2];
            a[i][2]=temp;
        }
        
     
      }
    
    for(int k =0;k<3;k++)
    {
        for(int p=0;p<3;p++)
        {
            cout<<a[k][p]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

