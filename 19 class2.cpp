
#include<iostream>
using namespace std;

class calculator
{

	public:
	int a,b,result;
	int getdata();
	int add();
	int sub();
	int mult();
	int div();
};

int calculator :: getdata()
{
	int a,b,result;
	cout<<endl;
	cout<<"Enter Value: ";
	cin>>a;
	cout<<"Enter Value: ";
	cin>>b;
}

int calculator :: add()
{
	int a,b,result;
	result=a+b;
	cout<<"Addition: "<<result<<endl;
}

int calculator :: sub()
{
	int a,b,result;
	result =a - b;
	cout<<"Subtraction: "<<result<<endl;
}

int calculator :: mult()
{
	int a,b,result;
	result =a * b;
	cout<<"Subtraction: "<<result<<endl;
}

int calculator :: div()
{
	int a,b,result;
	result =a / b;
	cout<<"Subtraction: "<<result<<endl;
}

int main()
{
	start:
	calculator c;
	c.getdata();
	c.add();
	c.sub();
	c.mult();
	c.div();
	goto start;
}
