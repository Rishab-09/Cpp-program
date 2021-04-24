
#include<iostream>
using namespace std;

class base
{
	public:
		virtual void print()
		{
			cout<<"Print Base Class"<<endl;
		}
		
		void show()
		{
			cout<<"Show Base Class"<<endl;
		}
};

class derived:public base
{
	public:
		void print()
		{
			cout<<"Print Derived Class"<<endl;
		}
		
		void show()
		{
			cout<<"Show Derived Class"<<endl;
		}
};

int main()
{
	base *bptr;
	derived d;
	bptr = &d;
	
	bptr->print();
	bptr->show();
}



