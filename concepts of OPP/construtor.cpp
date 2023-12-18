#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"Welcome to the construtor";
		}
		student(int a, int b)
		{
			cout<<"\na = "<<a;
			cout<<"\nb = "<<b;
		}
};
main()
{
	student s1;
	student s2(10,20);
	
}