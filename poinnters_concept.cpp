#include <iostream>

using namespace std;

int main()
{
    int a=1;
    int b=2;

    int* ptr1;
    int* ptr2;

    int** ptr3;

    ptr1 = &a;
    ptr2 = &b;

    ptr3= &ptr1;

    cout << ptr1 <<endl ;
    cout << *ptr1 <<endl ;
    cout << &*ptr1 << endl;
    cout << ptr2 <<endl ;
    cout << *ptr2 <<endl ;
    cout << &*ptr2 << endl;

    cout << ptr3 << endl;
        cout << *ptr3 << endl;

    cout << a << endl;
    cout << b << endl;

}
