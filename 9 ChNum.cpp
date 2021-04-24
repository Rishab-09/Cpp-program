
#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter Character/Digit: ";
	cin>> ch;
	
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		cout<<ch<< " is a alphabet";
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<ch<<" is a digit";
	}
	else
	{
		cout<<ch<<" is a special character";
	}
}

