// GREEDY KNAPSACK
#include<iostream>
using namespace std;
int main()
{
    float weight[10],prof[10],ratio[10],n,temp,knapsack;
    cout<<"enter num of obj"<<endl;
    cin>>n;
    cout<<"enter weights"<<endl;
    for (int i=0;i<=n;i++)
        cin>>weight[i];

     for (int i=0;i<=n;i++)
        cout<<weight[i]<<endl;

    cout<<"enter profits"<<endl;
    for (int i=0;i<=n;i++)
        cin>>prof[i];

     for (int i=0;i<=n;i++)
        cout<<prof[i]<<endl;


     for (int i=0;i<=n;i++)
       ratio[i]= prof[i]/weight[i];


     for (int i=0;i<=n;i++)
         cout<<ratio[i]<<endl;

     for(int i=0;i<10;i++)
	{
	for (int j = i + 1; j < 10; ++j)
	{
		if(ratio[i]<ratio[j])
		{
		temp=ratio[i];
		ratio[i]=ratio[j];
		ratio[j]=temp;
	    }

	}
	}

	     for(int i=0;i<10;i++)
	{
	for (int j = i + 1; j < 10; ++j)
	{
		if(weight[i]<weight[j])
		{
		temp=weight[i];
		weight[i]=weight[j];
		weight[j]=temp;

        temp=prof[i];
		prof[i]=prof[j];
		prof[j]=temp;

	    }

	}
	}
	  for (int i=0;i<=n;i++)
         cout<< ratio[i]<<endl;

     cout<<"enter knapsack"<<endl;
     cin>>knapsack;

  for (int i=0;i<=n;i++)
   {


    if (ratio[i]> knapsack)
        break;
    else
        knapsack-weight[i];

   }


     return 0;
}
