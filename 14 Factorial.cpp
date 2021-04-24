
#include<iostream>
using namespace std;

int main()
{
	int i,n,fact=1;
	cout<<"Enter Value: ";
	cin>>n;
	
	if(n<0)
	{
		cout<<"Factorial Cannot be Negative"<<endl;
	}
	for(i=1;i<=n;i++)
	{
		fact *= i;
		cout<<" "<<fact<<endl;
	}	
	cout<<"Factorial Value: "<<fact<<endl;
}
