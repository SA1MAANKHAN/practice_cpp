#include<iostream>
using namespace std;
class cal
{
	public:
		float a,b;
		cal(void);
		~cal(void);
		float sum(float x,float y);
		float sub( float x,float y);
		float mul(float x,float y);
		float div(float x,float y);


};
cal::cal(void)
{
	cout<<"HEY THERE, THIS IS CALCULATOR"<<endl;

}
float cal::sum(float x,float y)
{
	return x+y;
}
float cal::sub(float x,float y)
{
	return x-y;
}
float cal::mul(float x,float y)
{
	return x*y;
}
float cal::div(float x,float y)
{
	if(y==0)
	{
		cout<<"infinity"<<endl;
	}
	return x/y;
}
cal::~cal()
{
	cout<<"THANKS FOR USING MY CALCULATOR"<<endl;

}
main()
	{ int a,b;
	cal c;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"sum is "<<c.sum(a,b)<<endl;
	cout<<"difference is "<<c.sub(a,b)<<endl;
	cout<<"product is "<<c.mul(a,b)<<endl;
	cout<<"division is "<<c.div(a,b)<<endl;
	}
