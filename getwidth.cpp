#include<iostream>
using namespace std;
	class Box
	{
		public:
			double length;
			void setwidth(double wid);
			double getwidth(void);
		private:
			double width;
	};
	double Box::getwidth(void)
	{return width;}
	void Box::setwidth(double wid)
	{width = wid;}
	
	
	int main()
	{
		Box b;
		b.length=10;
		cout<<"length :"<<b.length;
		b.setwidth(20);
		cout<<"width : "<<b.getwidth;
		return 0;
	 } 
