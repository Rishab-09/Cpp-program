
#include<iostream>
using namespace std;

int main()
{
	int n,*p;
	cout<<"Enter Value: ";
	cin>>n;
	
	cout<<"Address of n: "<<&n<<endl;
	cout<<"Content of n: "<<n<<endl;
	
	p=&n;
	
	cout<<"Address of p: "<<&p<<endl;
	cout<<"Content of p: "<<*p<<endl;
	
	*p=20;
	
	cout<<"Address of *p: "<<&*p<<endl;
	cout<<"Content of *p: "<<*p<<endl;
	
}
