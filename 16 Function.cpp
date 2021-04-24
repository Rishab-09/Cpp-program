
#include<iostream>
using namespace std;

void calculator()
{
	int a,b;
	cout<<"Enter Value: ";
	cin>>a;
	cout<<"Enter Value: ";
	cin>>b;
	cout<<" "<<endl;
	
}

void add()
{
	int a ,b,result;
	result = a + b;
	cout<<"Addition of Number is "<<result<<endl;
}

void sub()
{
	int a ,b,result;
	result = a - b;
	cout<<"Subtraction of Number is "<<result<<endl;
}

void mul()
{
	int a ,b,result;
	result = a * b;
	cout<<"Multiplication of Number is "<<result<<endl;
}

void div()
{
	int a ,b,result;
	result = a / b;
	cout<<"Division of Number is "<<result<<endl;
}

int main()
{
	calculator();
	add();
	sub();
	mul();
	div();
	
}
