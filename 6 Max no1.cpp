
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<" Enter value: ";
	cin>> a;
	
	cout<<" Enter value: ";
	cin>> b;
	
	cout<<" Enter value: ";
	cin>> c;
	
	if(a > b)
	{
		if(a>c)
		{
			cout<< a <<" is the Maximum Number";
		}
		else
		{
			cout<< c <<" is the Maximum Number";
		}
	}
	else
	{
		if(b > c)
		{
			cout<< b <<" is the Maximum Number";	
		}
		else
		{
			cout<< c <<" is the Maximum Number";
		}
	}	
}
