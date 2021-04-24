
#include<iostream>
using namespace std;

int main()
{
	int i,a,n,arr[100];
	cout<<"Enter Array Size: ";
	cin>> n;
	cout<<endl;
	
	cout<<"Enter Value: ";
	for(i=0;i<n;i++)
	{
		for(a=1;a<n;a++)
		{
			cout<<a<<endl;
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	cout<<" Even Number: ";
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<" ";
		}
	}
	cout<<endl;
	cout<<" Odd Number: ";
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			cout<<arr[i]<<" ";
		}
	}
}
