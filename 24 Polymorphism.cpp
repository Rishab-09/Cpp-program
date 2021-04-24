
#include<iostream>
using namespace std;

class cal
{
	public:
		
		int add(int a,int b)
		{
			return a + b;
		}
		
		int add(int a,int b,int c)
		{
			return a + b + c;
		}
		
};

int main()
{
	cal c;
	cout<<"Result = "<<c.add(10,20)<<endl;
	cout<<"Result = "<<c.add(10,20,30)<<endl;
	
}
