#include<iostream>
using namespace std;

class A
{
	public:
		virtual void v1()=0;
		
	void v2()
	{
		cout<<"Your name is somesh "<<endl;
	}
};
class B:public A
{
	public :
		void v1()
		{
			cout<<" I am Web developer"<<endl;
		}
};

int main()
{
	B obj;
	obj.v1();
	obj.v2();
	
	return 0;
}

