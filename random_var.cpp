#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
	for (int i=0;i<200;i++)
	{

	cout<<rand()%6+1<<endl;
    }
}
