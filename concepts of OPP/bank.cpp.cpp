#include<iostream>
using namespace std;
class bank
{
	public:
		long long accountnumber;
		string name;
		string aname;
		int balance;
		
		void inputdata()
		{
			cout<<"enter your name: ";
			cin>>name;
			cout<<"enter your account number:";
			cin>>accountnumber;
			cout<<"enter type of account:";
			cin>>aname;
			cout<<"enter your balance amount in account:";
			cin>>balance;
			
		}
		void displaydata()
		{
			cout<<"your name is :"<<name<<endl;
			cout<<"your account number is :"<<accountnumber<<endl;
			cout<<"your account is :"<<aname<<endl;
			cout<<"your balance  in account is:"<<balance<<endl;
			
			
		}
};
main()
{
	bank b1;
	b1.inputdata();
	b1.displaydata();
	
}