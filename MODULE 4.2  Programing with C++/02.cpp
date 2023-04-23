#include<iostream>
using namespace std;
class bank
{
	public:
		string name,ta;
		int b,d,w,c,total;
		double t;
		void n()
		{
			cout<<"Enter Account Holder Name :"<<endl;
			cin>>name;
			cout<<"Enter The Account Number :"<<endl;
			cin>>t;	
			cout<<"Enter which Type of Account :"<<endl;
			cin>>ta;
			cout<<"Enter amount in the balance :"<<endl;
			cin>>b;
			cout<<"How much Deposited an amount :"<<endl;
			cin>>d;
			c=b+d;
			cout<<"Total Balance is :"<<c<<endl;
			cout<<"Withdraw amount  :"<<endl;
			cin>>w;
			total=c-w;
		}	
		void s()
		{
			cout<<"-------------------------------------------------------------------"<<endl;
			cout<<"Name :"<<name<<endl;
			cout<<"your blanace account :"<<total<<endl;
		}
};
int main()
{
	bank obj;
	obj.n();
	obj.s();
	return 0;
}
