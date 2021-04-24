#include<iostream>
using namespace std;

template <class x,class y> y add(x &a,y &b)
{
	y result =a+b;
	return result;
}

int main()
{
	int a=5;
	float b=2.5;
	
	cout<<"Addition of a and b is "<<add(a,b);
}

