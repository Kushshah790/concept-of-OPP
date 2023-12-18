#include<iostream>
using namespace std;
class rectangle
{
	private:
		int lenght,breath;
		public:
			void inputdata(int l,int b)
			{
				lenght=l;
				breath=b;
				float area,perimeter;
				area=l*b;
				perimeter=(l+b)*2;
				
				cout<<"The area of rectangle is :"<<area;
				cout<<"The perimeter of rectangle is :"<<perimeter;
				
			}
};
main()
{
	rectangle r;
	r.inputdata(20,50);
}