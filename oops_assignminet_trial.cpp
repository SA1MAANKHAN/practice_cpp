#include <iostream>  
using namespace std; 
class poly 
{ 
    public: 
      void func(int x) 
    { 
        cout << "function 1 :x is " << x << endl; 
    } 
      void func(double x) 
    { 
        cout << "function 2  :x is " << x << endl; 
    } 
    void func(int x, int y) 
    { 
        cout << "function 3 :x and y is " << x << ", " << y << endl; 
    } 
}; 
  int main() 
{ 
      
    poly obj1; 
    obj1.func(7); 
    obj1.func(9.132);  
    obj1.func(85,64); 
    return 0; 
}  

