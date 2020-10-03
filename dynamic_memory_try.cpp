#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout << "enter size of array " << endl;
    cin >> n ;

    int arr[n];
    cout << "enter " << n << " elements" << endl;

    for (int i=0 ; i<n ; i++)
       cin >> arr[i] ;

    for (int i=0 ; i<n ; i++)
    cout << arr[i] << endl ;


}
