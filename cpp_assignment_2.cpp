#include <iostream>
 struct A
 {
  int data[2];
  A(int x, int y) :
  data{x, y} {}
  virtual void f() {}
 };
int main(int argc, char **argv)
{ A a(22,33);
  int *arr = (int *) &a;
   std::cout << arr[1] << std::endl;
   return 0;
}
