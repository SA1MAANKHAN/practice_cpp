#include<iostream>
using namespace std;
class bin_search

{
	public:
	 	int i,n,a[n];
	 	bin_search(void)
	 	{
	 		cout<<"enter num of elements";
	 		cin>>n;
		 }
		 void input_show(void)
	 	{
	 	 for(i=0;i<n;i++)
	 	 {
		  cin>>a[i];
	 	  cout<<a[i];
		 }
		}
};1
int main()
{
	bin_search bs;
	bs.input_show();
	return 0;
}

