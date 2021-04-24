
#include<iostream>
using namespace std;

class A
{
		int a;
		int b;
	public:
		int  mul()
		{
			cout<<"Enter a: ";
			cin>>a;
			cout<<"Enter b: ";
			cin>>b;
			int c = a * b;
			return c;
		}		
};

class B : private A
{
	public:
	void display()
	{
		int result = mul();
		cout<<"Mutiplication of a * b = "<<result<<endl;
	}
};

int main()
{
	B b;
	b.display();
}
