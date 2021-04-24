
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<" Enter Value of a: ";
	cin>>a;
	cout<<" Enter Value of b: ";
	cin>>b;
	cout<<" Enter Value of c: ";
	cin>>c;
	
	cout <<((a==b) && (a==c) && (b==c))<<endl;
	cout <<((a!=b) && (a!=c) && (b!=c))<<endl;
	cout <<((a==b) || (a==c) || (b==c))<<endl;
	cout <<((a!=b) || (a!=c) || (b!=c))<<endl;
	cout <<(!(a==b))<<endl;
	cout <<(a!=b);
}
