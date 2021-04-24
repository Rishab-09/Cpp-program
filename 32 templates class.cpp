#include<iostream>
using namespace std;

template <class T>
class calculator
{
	private:
	T num1, num2;
	public:
	calculator(T n1, T n2)
	{
		num1=n1;
		num2=n2;
	}
	
	void displayresult()
	{
		
	cout<<"Number are "<<num1<<" "<<"and"<<" "<<num2<<endl;
	
	cout<<"Addition is: "<<add()<<endl;
	
	cout<<"Subtraction is: "<<sub()<<endl;
	
	cout<<"Multiplication is: "<<mult()<<endl;
	
	cout<<"Divsion is: "<<div()<<endl;
	}
	
	T add()
	{
		return num1 + num2;
	}
	T sub()
	{
		return num1 - num2;
	}
	T mult()
	{
		return num1 * num2;
	}
	T div()
	{
		return  num1 / num2;
	}
};

int main()
{
	calculator<int> a(4,2);
	calculator<float> b(4.2,2.2);
	cout<<endl;
	cout<<"int result"<<endl;
	a.displayresult();
	cout<<endl;
	cout<<"float result"<<endl;
	b.displayresult();
}
