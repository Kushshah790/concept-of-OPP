#include<iostream>
using namespace std;
class object
{
	private:
		int x;
		public:
			int y;
			protected:
				int z;
			
		friend void displaydata();		
};
 void displaydata()
{
	object o;
	o.x=15;
	o.y=22;
	o.z=31;
	
	cout<<"\n the value of x ="<<o.x;
	cout<<"\n the value of y ="<<o.y;
	cout<<"\n the value of z ="<<o.z;

};
main()
{
	 displaydata();
	
}