
#include<iostream>
using namespace std;

class Test
{
	public:
		int num;
	public:
		Test(): num(8){}
		
		void operator --()
		{
			num=num - 2;
		}


		void print()
		{
			cout<<"The Count is : "<<num;
		}
};

int main()
{
	Test T;
	T.operator --();
	T.print();
}


