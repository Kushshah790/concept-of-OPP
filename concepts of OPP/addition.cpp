#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"Welcome to construtor";
		}
		student(int a, int b)
		{
			cout<<"\na = "<<a+b;
			cout<<"\nb = "<<b+a;
		}
};
main()
{
	student s1;
	student s2(15,15);
}