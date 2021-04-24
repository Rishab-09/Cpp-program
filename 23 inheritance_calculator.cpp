#include<iostream>
using namespace std;
int a,b,sum;
class calculator
{
	public:
		//int a,b,sum;
		int get()
		{
			cout<<"Enter Value: ";
			cin>>a;
			cout<<"Enter Value: ";
			cin>>b;
		}
};

class add : public calculator
{
	public:
	int ans()
	{
	

		sum = a + b;
		cout<<"addition is : "<<sum;
}
};

int main()
{
	add s1;
	s1.get();
	s1.ans();
	//s1.sum;
	//cout<<"Addition: ";
}
