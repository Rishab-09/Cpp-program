
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter your Number: ";
	cin>> num;
	
	if(num > 0)
	{
		cout<<num<<" is the Positive number";
	}
	else if(num < 0)
	{
		cout<<num<<" is the Negative Number";
	}
	else
	{
		cout<<num<<" is Neither Positive nor Negative";
	}
}
