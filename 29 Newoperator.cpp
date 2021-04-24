
#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	
	ptr = new int;
	
	cout<<"Enter the Number: ";
	cin>>*ptr;
	
	cout<< "Entered value is: "<<*ptr;
	
}
