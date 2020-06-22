#include<iostream>
using namespace std;
int main()
{
	int j,i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<"#";
		}cout<<"\n";
	}
	return 0;
}
