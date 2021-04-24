
#include<iostream>
using namespace std;

int main()
{
	char ch,small_vowel,capital_vowel;
	cout<<" Enter Character: ";
	cin>> ch;
	
	small_vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	capital_vowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	
	if(small_vowel||capital_vowel)
	{
		cout<< ch <<" is a Vowel";
	}
	else
	{
		cout<< ch <<" is not a Vowel";
	}
}
