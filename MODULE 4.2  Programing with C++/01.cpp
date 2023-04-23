#include<iostream>
using namespace std;

class calc
{
	public:
		int a,b,c;
		void c1()
		{
			cout<<"Enter frist number :";
			cin>>a;
			cout<<"Enter secend number :";
			cin>>b;
			c=a+b;
			cout<<"Total :"<<c;
		}
};

int main()
{
	calc obj;
	obj.c1();

	return 0;
}
