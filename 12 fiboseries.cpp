
#include<iostream>
using namespace std;

int main()
{
	int n,i,n1=0,n2=1,n3;
	
	cout<<" Enter the fibonacci number: ";
	cin>> n;
	cout<<n1<<endl;
	cout<<n2;
	
	for(i=0;i<=n;i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		cout<<" "<<endl;
		cout << n3;
	}
}
