/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1,0,2,0,4};
    int i = 0,count = 0;
    while(i<5)
    {
        if(a[i]!=0)
        {
            a[count] = a[i];
            i++;count++;
        }
        else
        {
            i++;
        }   
    }
    while(count<5)
    {
        a[count]=0;
        count++;
    }
    
    for(int k=0;k<5;k++)
    {
        cout<<a[k];
    }
    return 0;
}

