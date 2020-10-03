#include <iostream>
class A {
    public:
        A() {}
        ~A() {
           throw 32;
             }
};
int main(int argc, const char * argv[])
{
  try
  {
    A a;
    throw 32;
  }
  catch(int a)
  {
    std::cout << a;
  }
}
