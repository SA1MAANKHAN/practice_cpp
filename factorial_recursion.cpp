#include<iostream>
using namespace std;
int main()
{	int a,fact=1;
	cout<<"enter the num\n";
	cin>>a
	factorial(a);
	cout<<fact;
	return 0;
}
int factorial(int a)
{  
    if(a<=0)
    return 1;
    else
	fact=factorial(a)*factorial(a-1);
	return fact;
}
