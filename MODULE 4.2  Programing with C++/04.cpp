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
		}
		void c2()
		{
			c=a+b;
			cout<<"Total :"<<c;

		}
};

int main()
{
	calc obj;
	obj.c1();
	obj.c2();

	return 0;
}
