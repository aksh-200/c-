
#include <iostream>  
#include <iomanip>  
using namespace std;  
  
int main()  
{  
    cout << " fill: " << setw(10) << 42 << '\n'  
              << "setfill('*'): " << setfill('*')  
                                  << setw(10) << 42 << '\n';  
}  
