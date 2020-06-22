#include<iostream>
using namespace std;
int main()
{
  int a;

  int* b= new int[4];
  double* c= new double;
  a=2;

 b[2]=69;

 *c=45;
  cout << a <<"   "<< b[2]<< "   "<<*c<<endl;
}
