
#include<iostream>
using namespace std;

class calculator
{
	public:
		int a,b,result;
		int getdata()
		{
			cout<<"Enter Number: ";
			cin>>a;
			cout<<"Enter Number: ";
			cin>>b;
		}
		
		int sum()
		{
			result=a+b;
			cout<<"Addition of two number: "<<result<<endl;
		}
};

int main()
{
	calculator c;
	c.getdata();
	c.sum();
}
