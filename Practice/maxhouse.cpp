#include <iostream>

using namespace std;

int main()
{
    int a [10] = {10,2,5,4,9,11,2,15,6,8};
    int max = 0;
    int n = 10;
    for(int i = 1;i<n-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {    
            if(a[i]>max)
            {
            max  = a[i];
            }
            
        }
    }
    cout<<"max is "<<max; 
    return 0;
}

