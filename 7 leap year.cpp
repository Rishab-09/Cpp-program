
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<< " Enter Year: ";
	cin>> num;
	
	if(num % 4 == 0)
	{
		cout<< num <<" is a Leap Year";
	}
	else
	{
		cout<< num <<" is not a Leap Year";
	}
}
