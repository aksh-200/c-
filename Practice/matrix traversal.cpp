#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={5,11,6,7,8,12,9,13,17};
    int i =0,j;
    for(i=0;i<3;i++)
    {
        if(i%2==0)
        {
            
            for(j=0;j<3;j++)
            {
                cout<<a[i][j];
                cout<<"-";
            }
        }
         else
         {
             for(j=2;j>=0;j--)
            {
                cout<<a[i][j];
                cout<<"-";
            }
         }
    }
}