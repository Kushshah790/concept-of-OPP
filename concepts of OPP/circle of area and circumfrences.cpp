#include<iostream>
using namespace std;
class circle
{
	private:
		int radius;
		public:
			
			void inputdata(int r)
			{
				radius=r;
				float area,circumfrence;
				area=3.141*r*r;
				circumfrence=2*3.141*r;
				
				cout<<"The area of circle is:"<<area;
				cout<<"The circumfrence of circle is:"<<circumfrence;
			}
};
main()
{
	circle c;
	c.inputdata(21);
}