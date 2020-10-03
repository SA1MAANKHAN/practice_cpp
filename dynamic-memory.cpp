#include<iostream>
using namespace std;
int main()
{
    int size;
    int* ptr;

    cout << "enter number of values you want to store ( size of array )" << endl;
    std::cin >> size;

    ptr = new int[size];
    std::cout << "Enter " << size << " values"<< '\n';
    for (int i = 0 ; i < size ; i++) {
      std::cin >> ptr[i];
    }
    for (int i = 0 ; i < size ; i++) {
      std::cout  << "No "<<i+1<< " values is \n" << ptr[i] << '\n';
    }
    



}
