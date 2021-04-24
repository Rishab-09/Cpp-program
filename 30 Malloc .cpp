#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int len;
	
	cout<<"Enter the Count of Number: ";
	cin>>len;
	
	int *ptr;
	ptr=(int *) malloc(sizeof(int)*len);
	
	for (int i=0; i<len;i++)
	{
		cout<<"enter a number: ";
		cin>>*(ptr);
	}
	
	cout<<"Enter element is: ";
	for(int i =0;i<len;i++)
	{
		cout<<*(ptr+i)<<endl;
	}
	
	free(ptr);
		return 0;
}
