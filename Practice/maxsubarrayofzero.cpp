/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[10] ={9,0,3,4,5,0,0,44,0,0};
    int i ;
    int count =0 , maxcount = 0;
    for(i = 0;i<10;i++)
    {
        if(a[i]==0)
        {
            count++;
            if(count>maxcount)
            {
                maxcount = count;
            }
        }
        
        else
        {
            count = 0;
        }
    }
    cout<<maxcount;
}

