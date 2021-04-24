
#include<iostream>
using namespace std;

int main()
{
	char ch,uppercase,lowercase;
	cout<<"Enter Character: ";
	cin>> ch;
	
	if(ch>='A' && ch<='Z')
	{
		cout<<ch<<" is Uppercase Alphabet";
	}	
	else if(ch>='a' && ch<='z')
	{
		cout<<ch<<" is a Lowercase Alphabet";
	}
	else
	{
		cout<<ch<<" is not a Character";
	}
}
