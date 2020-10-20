#include<iostream>
using namespace std;
int main(){
   int a = 5;
   cout << endl << a << endl << &a << endl;
   int* ptr;
   ptr = &a ;
   cout << *ptr ;

   return 0;
}
